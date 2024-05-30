#pragma once

#ifdef DANGO_EXPORTS
#define DANGO_API __declspec(dllexport)
#else
#define DANGO_API __declspec(dllimport)
#endif

extern "C" DANGO_API void hi_there();