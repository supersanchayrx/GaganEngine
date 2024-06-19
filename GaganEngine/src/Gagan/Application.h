#pragma once
#include "core.h"

namespace Gagan {

	class Gagan_Api Application
	{
	public:
		Application();
		~Application();

		void Run();
	};
	

	//to be defined in application
	Application* CreateApplication(); 

}


