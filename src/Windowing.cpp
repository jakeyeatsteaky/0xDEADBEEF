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
    
}