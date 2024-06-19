#include "Gagan.h"

class Sandbox : public Gagan::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Gagan::Application* Gagan::CreateApplication()
{
	return new Sandbox();
}

int main()
{
	return 0;
}