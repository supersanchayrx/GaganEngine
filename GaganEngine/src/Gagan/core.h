#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define Gagan_Api __declspec(dllexport)
	#else	
		#define Gagan_Api __declspec(dllimport)
	#endif
#else
	#error GaganEngine is only supported for windows for now !
#endif 

