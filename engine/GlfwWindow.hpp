#ifndef CONFINED_GLFWWINDOW_HPP
#define CONFINED_GLFWWINDOW_HPP

#include "Window.hpp"

class GlfwWindow : Window {
public:
    GlfwWindow(const char* title, int width, int height);
};

#endif //CONFINED_GLFWWINDOW_HPP
