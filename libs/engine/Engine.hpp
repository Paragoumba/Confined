#ifndef CONFINED_ENGINE_HPP
#define CONFINED_ENGINE_HPP

#include "Window.hpp"

class Engine {
private:
    int fps = 60;
    Window* window;

public:
    Engine();

    void loop();
};

#endif //CONFINED_ENGINE_HPP
