#ifndef APP_HPP
#define APP_HPP

class App
{
private:
    void Setup();

    void Input();
    void Update();
    void Render();
public:
    App();
    ~App();

    void Run();
};

#endif // APP_HPP
