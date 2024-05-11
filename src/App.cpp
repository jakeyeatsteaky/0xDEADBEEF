#include "SDL2/SDL.h"
#include "App.hpp"
#include "Logger.hpp"


App::App() :
    m_initialized(false)
{
    Setup();
}

App::~App() noexcept
{
    LOG("Destroying the App and killing this SDL Instance");
    SDL_Quit();
}

void App::Setup()
{
    // initialize Low Level framework (SDL)
    if(0 != SDL_Init(SDL_INIT_VIDEO)) {
        Logger::Err("Failed to initialize SDL!", SDL_GetError());
        return;
    }

    m_windowObj = std::make_unique<Window>();

    bool initParam1 = m_windowObj->Init();

    m_initialized = initParam1;
}

void App::Input()
{

}

void App::Update()
{

}

void App::Render()
{

}

void App::Run()
{
    if(!m_initialized) {
        LOG("Failed to initialize the application");
        throw std::runtime_error("RUN failed");
    }


}
