#pragma once

#ifdef SR_PLATFORM_WINDOWS

#ifdef SR_BUILD_DLL

#define SIRIUS_API __declspec(dllexport)

#else

#define SIRIUS_API __declspec(dllimport)

#endif

#else
#error Sirius only supports windows at the moment!

#endif