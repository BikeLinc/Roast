#pragma once

#include "RoastHeader.h"

#define WINDOW_DEFAULT_WIDTH 800
#define WINDOW_DEFAULT_HEIGHT 600

class Window {
public:
    Window(const char* title);
    void initialize();
    void update();
    void dispose();
    bool isOpen();
    glm::ivec2 getSize();
    GLFWwindow* getHandle();

private:
    const char* application;
    GLFWwindow* window = nullptr;
    static void framebufferResizeCallback(GLFWwindow* window, int width, int height);
    void displayFPS();
    int nbFrames = 0;
    double lastTime = 0.0;
    bool framebufferResized = false;
};

