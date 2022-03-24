#include "Window.h"

Window::Window(const char* title) : application(title) {
    
}

void Window::initialize()  {
    if (!glfwInit()) {
        std::cout << "* Failed to initialize glfw." << std::endl;
    }
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
    window = glfwCreateWindow(WINDOW_DEFAULT_WIDTH, WINDOW_DEFAULT_HEIGHT, application, NULL, NULL);
    if (window == nullptr) {
        std::cout << "* Failed to create a glfw window." << std::endl;
    }
    glfwSetWindowUserPointer(window, this);
    glfwSetFramebufferSizeCallback(window, framebufferResizeCallback);
}

void Window::update() {
    glfwPollEvents();
    displayFPS();
}

void Window::dispose() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

bool Window::isOpen() {
    return !glfwWindowShouldClose(window);
}

glm::ivec2 Window::getSize() {
    int width = 0, height = 0;
    glfwGetFramebufferSize(window, &width, &height);
    while (width == 0 || height == 0) {
        glfwGetFramebufferSize(window, &width, &height);
        glfwWaitEvents();
    }

    return glm::ivec2(width, height);
}

GLFWwindow* Window::getHandle() {
    return window;
}

void Window::framebufferResizeCallback(GLFWwindow* window, int width, int height) {
    auto win = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
    win->framebufferResized = true;
}

void Window::displayFPS() {
    // Measure speed
    double currentTime = glfwGetTime();
    nbFrames++;

    if (currentTime - lastTime >= 1.0) { // If last cout was more than 1 sec ago
        char title[256];
        title[255] = '\0';

        snprintf(title, 255,
            "%s %s - [FPS: %4.0f]",
            application, "v1.0", (float)nbFrames);

        glfwSetWindowTitle(window, title);

        nbFrames = 0;
        lastTime += 1.0;
    }
}


