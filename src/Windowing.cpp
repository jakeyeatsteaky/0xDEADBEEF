#include "Windowing.hpp"
#include "Logger.hpp"

Window::Window() :
    m_window(nullptr, SDL_DestroyWindow)
{
    LOG_("Creating a window object");
}

Window::~Window() noexcept
{
    // Destroy SDL Window
    LOG("Destroying the SDL Window instance");
    SDL_DestroyWindow(m_window.get());
}

bool Window::Init()
{
    SDL_Window* window = SDL_CreateWindow("0xDEADBEEF",
                                SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED,
                                800,
                                600,
                                SDL_WINDOW_SHOWN);
    if(nullptr == window) { 
        ERR("Failed to create SDL window", SDL_GetError());
        return false;
    }
    // Since the struct SDL_Window is a C struct, (cannot be "constructed"), use .reset();
    m_window.reset(window);
}