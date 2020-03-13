#pragma once

// [IGE]: Support SDL2
#ifdef NANOGUI_BUILD_SDL2
	#include <SDL_keycode.h>

	#define SDL_BUTTON_LEFT     1
	#define SDL_BUTTON_MIDDLE   2
	#define SDL_BUTTON_RIGHT    3

	#define SDL_RELEASED	    0
	#define SDL_PRESSED			1

	#define GLFW_MOUSE_BUTTON_1         SDL_BUTTON_LEFT
	#define GLFW_MOUSE_BUTTON_2         SDL_BUTTON_RIGHT
	#define GLFW_MOUSE_BUTTON_3         SDL_BUTTON_MIDDLE
	#define GLFW_MOUSE_BUTTON_4			4
	#define GLFW_MOUSE_BUTTON_5			5
	#define GLFW_MOUSE_BUTTON_6			6
	#define GLFW_MOUSE_BUTTON_7			7
	#define GLFW_MOUSE_BUTTON_8			8
	#define GLFW_MOUSE_BUTTON_LAST		GLFW_MOUSE_BUTTON_8
	#define GLFW_MOUSE_BUTTON_LEFT      GLFW_MOUSE_BUTTON_1
	#define GLFW_MOUSE_BUTTON_RIGHT     GLFW_MOUSE_BUTTON_2
	#define GLFW_MOUSE_BUTTON_MIDDLE    GLFW_MOUSE_BUTTON_3

	/* Printable keys */
	#define GLFW_KEY_SPACE              (int)SDLK_SPACE
	#define GLFW_KEY_APOSTROPHE         (int)SDLK_QUOTE  /* ' */
	#define GLFW_KEY_COMMA              (int)SDLK_COMMA  /* , */
	#define GLFW_KEY_MINUS              (int)SDLK_MINUS  /* - */
	#define GLFW_KEY_PERIOD             (int)SDLK_PERIOD  /* . */
	#define GLFW_KEY_SLASH              (int)SDLK_SLASH  /* / */
	#define GLFW_KEY_0                  (int)SDLK_0
	#define GLFW_KEY_1                  (int)SDLK_1
	#define GLFW_KEY_2                  (int)SDLK_2
	#define GLFW_KEY_3                  (int)SDLK_3
	#define GLFW_KEY_4                  (int)SDLK_4
	#define GLFW_KEY_5                  (int)SDLK_5
	#define GLFW_KEY_6                  (int)SDLK_6
	#define GLFW_KEY_7                  (int)SDLK_7
	#define GLFW_KEY_8                  (int)SDLK_8
	#define GLFW_KEY_9                  (int)SDLK_9
	#define GLFW_KEY_SEMICOLON          (int)SDLK_SEMICOLON  /* ; */
	#define GLFW_KEY_EQUAL              (int)SDLK_EQUALS  /* = */
	#define GLFW_KEY_A                  (int)SDLK_a
	#define GLFW_KEY_B                  (int)SDLK_b
	#define GLFW_KEY_C                  (int)SDLK_c
	#define GLFW_KEY_D                  (int)SDLK_d
	#define GLFW_KEY_E                  (int)SDLK_e
	#define GLFW_KEY_F                  (int)SDLK_f
	#define GLFW_KEY_G                  (int)SDLK_g
	#define GLFW_KEY_H                  (int)SDLK_h
	#define GLFW_KEY_I                  (int)SDLK_i
	#define GLFW_KEY_J                  (int)SDLK_j
	#define GLFW_KEY_K                  (int)SDLK_k
	#define GLFW_KEY_L                  (int)SDLK_l
	#define GLFW_KEY_M                  (int)SDLK_m
	#define GLFW_KEY_N                  (int)SDLK_n
	#define GLFW_KEY_O                  (int)SDLK_o
	#define GLFW_KEY_P                  (int)SDLK_p
	#define GLFW_KEY_Q                  (int)SDLK_q
	#define GLFW_KEY_R                  (int)SDLK_r
	#define GLFW_KEY_S                  (int)SDLK_s
	#define GLFW_KEY_T                  (int)SDLK_t
	#define GLFW_KEY_U                  (int)SDLK_u
	#define GLFW_KEY_V                  (int)SDLK_v
	#define GLFW_KEY_W                  (int)SDLK_w
	#define GLFW_KEY_X                  (int)SDLK_x
	#define GLFW_KEY_Y                  (int)SDLK_y
	#define GLFW_KEY_Z                  (int)SDLK_z
	#define GLFW_KEY_LEFT_BRACKET       (int)SDLK_LEFTBRACKET  /* [ */
	#define GLFW_KEY_BACKSLASH          (int)SDLK_BACKSLASH  /* \ */
	#define GLFW_KEY_RIGHT_BRACKET      (int)SDLK_RIGHTBRACKET  /* ] */
	#define GLFW_KEY_GRAVE_ACCENT       (int)SDLK_BACKQUOTE  /* ` */
	#define GLFW_KEY_WORLD_1            161 /* non-US #1 */
	#define GLFW_KEY_WORLD_2            162 /* non-US #2 */

	/* Non-printable keys */
	#define GLFW_KEY_ESCAPE             (int)SDLK_ESCAPE
	#define GLFW_KEY_ENTER              (int)SDLK_RETURN
	#define GLFW_KEY_TAB                (int)SDLK_TAB
	#define GLFW_KEY_BACKSPACE          (int)SDLK_BACKSPACE
	#define GLFW_KEY_INSERT             (int)SDLK_INSERT
	#define GLFW_KEY_DELETE             (int)SDLK_DELETE
	#define GLFW_KEY_RIGHT              (int)SDLK_RIGHT
	#define GLFW_KEY_LEFT               (int)SDLK_LEFT
	#define GLFW_KEY_DOWN               (int)SDLK_DOWN
	#define GLFW_KEY_UP                 (int)SDLK_UP
	#define GLFW_KEY_PAGE_UP            (int)SDLK_PAGEUP
	#define GLFW_KEY_PAGE_DOWN          (int)SDLK_PAGEDOWN
	#define GLFW_KEY_HOME               (int)SDLK_HOME
	#define GLFW_KEY_END                (int)SDLK_END
	#define GLFW_KEY_CAPS_LOCK          (int)SDLK_CAPSLOCK
	#define GLFW_KEY_SCROLL_LOCK        (int)SDLK_SCROLLLOCK
	#define GLFW_KEY_NUM_LOCK           (int)SDLK_NUMLOCKCLEAR
	#define GLFW_KEY_PRINT_SCREEN       (int)SDLK_PRINTSCREEN
	#define GLFW_KEY_PAUSE              (int)SDLK_PAUSE
	#define GLFW_KEY_F1                 (int)SDLK_F1
	#define GLFW_KEY_F2                 (int)SDLK_F2
	#define GLFW_KEY_F3                 (int)SDLK_F3
	#define GLFW_KEY_F4                 (int)SDLK_F4
	#define GLFW_KEY_F5                 (int)SDLK_F5
	#define GLFW_KEY_F6                 (int)SDLK_F6
	#define GLFW_KEY_F7                 (int)SDLK_F7
	#define GLFW_KEY_F8                 (int)SDLK_F8
	#define GLFW_KEY_F9                 (int)SDLK_F9
	#define GLFW_KEY_F10                (int)SDLK_F10
	#define GLFW_KEY_F11                (int)SDLK_F11
	#define GLFW_KEY_F12                (int)SDLK_F12
	#define GLFW_KEY_F13                (int)SDLK_F13
	#define GLFW_KEY_F14                (int)SDLK_F14
	#define GLFW_KEY_F15                (int)SDLK_F15
	#define GLFW_KEY_F16                (int)SDLK_F16
	#define GLFW_KEY_F17                (int)SDLK_F17
	#define GLFW_KEY_F18                (int)SDLK_F18
	#define GLFW_KEY_F19                (int)SDLK_F19
	#define GLFW_KEY_F20                (int)SDLK_F20
	#define GLFW_KEY_F21                (int)SDLK_F21
	#define GLFW_KEY_F22                (int)SDLK_F22
	#define GLFW_KEY_F23                (int)SDLK_F23
	#define GLFW_KEY_F24                (int)SDLK_F24
	#define GLFW_KEY_F25                (int)SDLK_F24 // SDL: Fmax => F24
	#define GLFW_KEY_KP_0               (int)SDLK_KP_0
	#define GLFW_KEY_KP_1               (int)SDLK_KP_1
	#define GLFW_KEY_KP_2               (int)SDLK_KP_2
	#define GLFW_KEY_KP_3               (int)SDLK_KP_3
	#define GLFW_KEY_KP_4               (int)SDLK_KP_4
	#define GLFW_KEY_KP_5               (int)SDLK_KP_5
	#define GLFW_KEY_KP_6               (int)SDLK_KP_6
	#define GLFW_KEY_KP_7               (int)SDLK_KP_7
	#define GLFW_KEY_KP_8               (int)SDLK_KP_8
	#define GLFW_KEY_KP_9               (int)SDLK_KP_9
	#define GLFW_KEY_KP_DECIMAL         (int)SDLK_KP_PERIOD
	#define GLFW_KEY_KP_DIVIDE          (int)SDLK_KP_DIVIDE
	#define GLFW_KEY_KP_MULTIPLY        (int)SDLK_KP_MULTIPLY
	#define GLFW_KEY_KP_SUBTRACT        (int)SDLK_KP_MINUS
	#define GLFW_KEY_KP_ADD             (int)SDLK_KP_PLUS
	#define GLFW_KEY_KP_ENTER           (int)SDLK_KP_ENTER
	#define GLFW_KEY_KP_EQUAL           (int)SDLK_KP_EQUALS
	#define GLFW_KEY_LEFT_SHIFT         (int)SDLK_LSHIFT
	#define GLFW_KEY_LEFT_CONTROL       (int)SDLK_LCTRL
	#define GLFW_KEY_LEFT_ALT           (int)SDLK_LALT
	#define GLFW_KEY_LEFT_SUPER         (int)SDLK_LGUI
	#define GLFW_KEY_RIGHT_SHIFT        (int)SDLK_RSHIFT
	#define GLFW_KEY_RIGHT_CONTROL      (int)SDLK_RCTRL
	#define GLFW_KEY_RIGHT_ALT          (int)SDLK_RALT
	#define GLFW_KEY_RIGHT_SUPER        (int)SDLK_RGUI
	#define GLFW_KEY_MENU               (int)SDLK_MENU
	#define GLFW_KEY_LAST               GLFW_KEY_MENU
	#define GLFW_KEY_UNKNOWN            -1

	/* States of key*/
	#define GLFW_RELEASE                SDL_RELEASED
	#define GLFW_PRESS                  SDL_PRESSED
	#define GLFW_REPEAT                 2

	/* States of key-mod*/
	#define GLFW_MOD_SHIFT           KMOD_SHIFT
	#define GLFW_MOD_CONTROL         KMOD_CTRL
	#define GLFW_MOD_ALT             KMOD_ALT
	#define GLFW_MOD_SUPER           KMOD_GUI
	#define GLFW_MOD_CAPS_LOCK       KMOD_CAPS
	#define GLFW_MOD_NUM_LOCK        KMOD_NUM

#elif !defined(NANOGUI_BUILD_GLFW)
	#define GLFW_MOUSE_BUTTON_1         0
	#define GLFW_MOUSE_BUTTON_2         1
	#define GLFW_MOUSE_BUTTON_3         2   
	#define GLFW_MOUSE_BUTTON_LEFT      GLFW_MOUSE_BUTTON_1
	#define GLFW_MOUSE_BUTTON_RIGHT     GLFW_MOUSE_BUTTON_2
	#define GLFW_MOUSE_BUTTON_MIDDLE    GLFW_MOUSE_BUTTON_3

	/* Printable keys */
	#define GLFW_KEY_SPACE              32
	#define GLFW_KEY_APOSTROPHE         39  /* ' */
	#define GLFW_KEY_COMMA              44  /* , */
	#define GLFW_KEY_MINUS              45  /* - */
	#define GLFW_KEY_PERIOD             46  /* . */
	#define GLFW_KEY_SLASH              47  /* / */
	#define GLFW_KEY_0                  48
	#define GLFW_KEY_1                  49
	#define GLFW_KEY_2                  50
	#define GLFW_KEY_3                  51
	#define GLFW_KEY_4                  52
	#define GLFW_KEY_5                  53
	#define GLFW_KEY_6                  54
	#define GLFW_KEY_7                  55
	#define GLFW_KEY_8                  56
	#define GLFW_KEY_9                  57
	#define GLFW_KEY_SEMICOLON          59  /* ; */
	#define GLFW_KEY_EQUAL              61  /* = */
	#define GLFW_KEY_A                  65
	#define GLFW_KEY_B                  66
	#define GLFW_KEY_C                  67
	#define GLFW_KEY_D                  68
	#define GLFW_KEY_E                  69
	#define GLFW_KEY_F                  70
	#define GLFW_KEY_G                  71
	#define GLFW_KEY_H                  72
	#define GLFW_KEY_I                  73
	#define GLFW_KEY_J                  74
	#define GLFW_KEY_K                  75
	#define GLFW_KEY_L                  76
	#define GLFW_KEY_M                  77
	#define GLFW_KEY_N                  78
	#define GLFW_KEY_O                  79
	#define GLFW_KEY_P                  80
	#define GLFW_KEY_Q                  81
	#define GLFW_KEY_R                  82
	#define GLFW_KEY_S                  83
	#define GLFW_KEY_T                  84
	#define GLFW_KEY_U                  85
	#define GLFW_KEY_V                  86
	#define GLFW_KEY_W                  87
	#define GLFW_KEY_X                  88
	#define GLFW_KEY_Y                  89
	#define GLFW_KEY_Z                  90
	#define GLFW_KEY_LEFT_BRACKET       91  /* [ */
	#define GLFW_KEY_BACKSLASH          92  /* \ */
	#define GLFW_KEY_RIGHT_BRACKET      93  /* ] */
	#define GLFW_KEY_GRAVE_ACCENT       96  /* ` */
	#define GLFW_KEY_WORLD_1            161 /* non-US #1 */
	#define GLFW_KEY_WORLD_2            162 /* non-US #2 */

	/* Non-printable keys */
	#define GLFW_KEY_ESCAPE             256
	#define GLFW_KEY_ENTER              257
	#define GLFW_KEY_TAB                258
	#define GLFW_KEY_BACKSPACE          259
	#define GLFW_KEY_INSERT             260
	#define GLFW_KEY_DELETE             261
	#define GLFW_KEY_RIGHT              262
	#define GLFW_KEY_LEFT               263
	#define GLFW_KEY_DOWN               264
	#define GLFW_KEY_UP                 265
	#define GLFW_KEY_PAGE_UP            266
	#define GLFW_KEY_PAGE_DOWN          267
	#define GLFW_KEY_HOME               268
	#define GLFW_KEY_END                269
	#define GLFW_KEY_CAPS_LOCK          280
	#define GLFW_KEY_SCROLL_LOCK        281
	#define GLFW_KEY_NUM_LOCK           282
	#define GLFW_KEY_PRINT_SCREEN       283
	#define GLFW_KEY_PAUSE              284
	#define GLFW_KEY_F1                 290
	#define GLFW_KEY_F2                 291
	#define GLFW_KEY_F3                 292
	#define GLFW_KEY_F4                 293
	#define GLFW_KEY_F5                 294
	#define GLFW_KEY_F6                 295
	#define GLFW_KEY_F7                 296
	#define GLFW_KEY_F8                 297
	#define GLFW_KEY_F9                 298
	#define GLFW_KEY_F10                299
	#define GLFW_KEY_F11                300
	#define GLFW_KEY_F12                301
	#define GLFW_KEY_F13                302
	#define GLFW_KEY_F14                303
	#define GLFW_KEY_F15                304
	#define GLFW_KEY_F16                305
	#define GLFW_KEY_F17                306
	#define GLFW_KEY_F18                307
	#define GLFW_KEY_F19                308
	#define GLFW_KEY_F20                309
	#define GLFW_KEY_F21                310
	#define GLFW_KEY_F22                311
	#define GLFW_KEY_F23                312
	#define GLFW_KEY_F24                313
	#define GLFW_KEY_F25                314
	#define GLFW_KEY_KP_0               320
	#define GLFW_KEY_KP_1               321
	#define GLFW_KEY_KP_2               322
	#define GLFW_KEY_KP_3               323
	#define GLFW_KEY_KP_4               324
	#define GLFW_KEY_KP_5               325
	#define GLFW_KEY_KP_6               326
	#define GLFW_KEY_KP_7               327
	#define GLFW_KEY_KP_8               328
	#define GLFW_KEY_KP_9               329
	#define GLFW_KEY_KP_DECIMAL         330
	#define GLFW_KEY_KP_DIVIDE          331
	#define GLFW_KEY_KP_MULTIPLY        332
	#define GLFW_KEY_KP_SUBTRACT        333
	#define GLFW_KEY_KP_ADD             334
	#define GLFW_KEY_KP_ENTER           335
	#define GLFW_KEY_KP_EQUAL           336
	#define GLFW_KEY_LEFT_SHIFT         340
	#define GLFW_KEY_LEFT_CONTROL       341
	#define GLFW_KEY_LEFT_ALT           342
	#define GLFW_KEY_LEFT_SUPER         343
	#define GLFW_KEY_RIGHT_SHIFT        344
	#define GLFW_KEY_RIGHT_CONTROL      345
	#define GLFW_KEY_RIGHT_ALT          346
	#define GLFW_KEY_RIGHT_SUPER        347
	#define GLFW_KEY_MENU               348
	#define GLFW_KEY_LAST               GLFW_KEY_MENU
	#define GLFW_KEY_UNKNOWN            -1

	/* States of key*/
	#define GLFW_RELEASE                0
	#define GLFW_PRESS                  1
	#define GLFW_REPEAT                 2

	/* States of key-mod*/
	#define GLFW_MOD_SHIFT           0x0001
	#define GLFW_MOD_CONTROL         0x0002
	#define GLFW_MOD_ALT             0x0004
	#define GLFW_MOD_SUPER           0x0008
	#define GLFW_MOD_CAPS_LOCK       0x0010
	#define GLFW_MOD_NUM_LOCK        0x0020
#endif
// [/IGE]
