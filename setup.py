import importlib

try:
    importlib.import_module('conans')
except ImportError:
    from pip._internal import main as _main
    _main(['install', 'conan'])

import pathlib
import os
import re
import sys
import platform
import subprocess
import shutil

from setuptools import setup, Extension
from setuptools.command.build_ext import build_ext
from distutils.version import LooseVersion

is64Bit = sys.maxsize > 2 ** 32
if is64Bit:
    build_arch = 'x64'
else:
    build_arch = 'x86'

from conanfile import IgeConan

class CMakeExtension(Extension):
    def __init__(self, name, sourcedir=''):
        Extension.__init__(self, name, sources=[])
        self.sourcedir = os.path.abspath(sourcedir)


class CMakeBuild(build_ext):
    def run(self):
        try:
            out = subprocess.check_output(['cmake', '--version'])
        except OSError:
            raise RuntimeError("CMake must be installed to build the following extensions: " +
                               ", ".join(e.name for e in self.extensions))

        if platform.system() == "Windows":
            cmake_version = LooseVersion(re.search(r'version\s*([\d.]+)', out.decode()).group(1))
            if cmake_version < '3.1.0':
                raise RuntimeError("CMake >= 3.1.0 is required on Windows")

        for ext in self.extensions:
            self.build_extension(ext)

    def build_extension(self, ext):
        cwd = pathlib.Path().absolute()
        extdir = os.path.abspath(os.path.dirname(self.get_ext_fullpath(ext.name)))
        cmake_args = ['-DNANOGUI_BUILD_GLEW=YES',
                      '-DNANOGUI_BUILD_EXAMPLES=NO',
                      '-DAPP_STYLE=SHARED',
                      '-DPLATFORM=pc',
                      '-DBUILD_ARCH=' + build_arch,
                      '-DPYTHON_VERSION=' + str(sys.version_info[0]) + '.' + str(sys.version_info[1])
                      ]

        cfg = 'Debug' if self.debug else 'Release'
        build_args = ['--config', cfg]
        cmake_args += ['-DCMAKE_LIBRARY_OUTPUT_DIRECTORY_{}={}'.format(cfg.upper(), extdir)]
        cmake_args += ['-DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_{}={}'.format(cfg.upper(), self.build_temp)]
        cmake_args += ['-DCMAKE_RUNTIME_OUTPUT_DIRECTORY_{}={}'.format(cfg.upper(), extdir)]

        if platform.system() == "Windows":
            if sys.maxsize > 2**32:
                cmake_args += ['-A', 'x64']
            else:
                cmake_args += ['-A', 'Win32']
            build_args += ['--', '/m']
        else:
            cmake_args += ['-DCMAKE_BUILD_TYPE=' + cfg]
            build_args += ['--', '-j2']

        env = os.environ.copy()
        env['CXXFLAGS'] = '{} -DVERSION_INFO=\\"{}\\"'.format(env.get('CXXFLAGS', ''),
                                                              self.distribution.get_version())
        if not os.path.exists(self.build_temp):
            os.makedirs(self.build_temp)
        os.chdir(self.build_temp)

        igeBuilder = os.environ.get('IGE_BUILDER')
        conanProfile = None
        cmake_arch = None

        if sys.platform == 'win32':
            if sys.maxsize > 2 ** 32:
                conanProfile = os.path.join(igeBuilder, 'profiles', 'windows_x86_64')
                cmake_arch = 'x64'
            else:
                conanProfile = os.path.join(igeBuilder, 'profiles', 'windows_x86')
                cmake_arch = 'Win32'

        if conanProfile:
            self.spawn(['conan', 'install', f'--profile={conanProfile}', str(cwd), '--update', '--remote', 'ige-center'])
        else:
            self.spawn(['conan', 'install', '--update', '--remote', 'ige-center'])

        os.chdir(cwd)
        subprocess.check_call(['cmake', ext.sourcedir] + cmake_args, cwd=self.build_temp, env=env)
        subprocess.check_call(['cmake', '--build', '.'] + build_args, cwd=self.build_temp)

        ext_name = str(ext.name).split('.')[-1]
        pyd_path = os.path.join(self.build_temp, 'bin', f'{ext_name}.pyd')
        extension_path = os.path.join(cwd, self.get_ext_fullpath(ext.name))
        extension_dir = os.path.dirname(extension_path)
        if not os.path.exists(extension_dir):
            os.makedirs(extension_dir)
        shutil.move(pyd_path, extension_path)

        # Troubleshooting: if fail on line above then delete all possible
        # temporary CMake files including "CMakeCache.txt" in top level dir.
        os.chdir(str(cwd))

setup(
    name=IgeConan.name,
    version=IgeConan.version,
    author='Wenzel Jakob',
    author_email='wenzel.jakob@epfl.ch',
    description='A minimalistic GUI library for OpenGL, GLES 2, and Metal',
    long_description='',
    ext_modules=[CMakeExtension('igeNanoGUI')],
    cmdclass=dict(build_ext=CMakeBuild),
    zip_safe=False,
      setup_requires=['wheel']
)
