#ifndef CONFINED_WINDOW_HPP
#define CONFINED_WINDOW_HPP

class Window {
public:
    Window(const char* title, int width, int height);

    ~Window();

private:
    const char* title;
    int width;
    int height;
};

#endif //CONFINED_WINDOW_HPP
