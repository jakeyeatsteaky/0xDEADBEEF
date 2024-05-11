#ifndef APP_HPP
#define APP_HPP

#include <memory>
#include "Windowing.hpp"

class App
{
private:
    bool m_initialized;
    std::unique_ptr<Window> m_windowObj;

    void Setup();
    void Input();
    void Update();
    void Render();

public:
    App();
    ~App() noexcept;

    void Run();
};

#endif // APP_HPP
