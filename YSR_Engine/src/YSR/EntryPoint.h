#pragma once

#ifdef YSR_PLATFORM_WINDOW

extern YSR::Application* YSR::CreateApplication();

int main(int argc, char** argv)
{
    printf("Welcome to custom Engine\n");
    auto app = YSR::CreateApplication();
    app->Run();
    delete app;
}
#endif // DEBUG