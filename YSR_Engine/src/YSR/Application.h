#pragma once

#include "Core.h"

namespace YSR
{
	class YSR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
			 
	};

	// To be defined in Client 
	Application* CreateApplication();
}

