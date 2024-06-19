#pragma once

#ifdef HZ_PLATFORM_WINODWS


extern Gagan::Applucation* Gagan::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Gagan::CreateApplication();
	app->Run();
	delete app;
}

#endif
