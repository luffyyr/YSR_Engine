#pragma once

#ifdef YSR_PLATFORM_WINDOW
	#ifdef YSR_BUILD_DLL
		#define YSR_API _declspec(dllexport)
	#else 
		#define YSR_API _declspec(dllimport)
	#endif // DEBUG
#else
	#error YSR_Engine only support windows!
#endif // DEBUG