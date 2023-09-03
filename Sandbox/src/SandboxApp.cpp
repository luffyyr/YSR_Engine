#include <Ysr.h>

class Sandbox :public YSR::Application 
{
public:
    Sandbox()
    {

    }
    ~Sandbox() 
    {

    }
};
     
YSR::Application* YSR::CreateApplication()
{
    return new Sandbox();
}

//int main()
//{
//    Sandbox* sandbox = new Sandbox();
//    sandbox->Run();
//    delete sandbox;
//} 