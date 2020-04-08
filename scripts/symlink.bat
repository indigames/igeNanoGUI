@echo off

SET PROJECT_DIR=%~dp0..

rem Clone igeLibs, then set environment variable *IGE_LIBS* point to the cloned directory
if not exist "%PROJECT_DIR%\igeLibs" (
    mklink /J "%PROJECT_DIR%\igeLibs" "%IGE_LIBS%"
)

if not exist "%PROJECT_DIR%\igeLibs" (
    echo IGE_LIBS was not set, please clone igeLibs and set IGE_LIBS to the cloned path!
    goto ERROR
)
