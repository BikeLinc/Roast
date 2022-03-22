#pragma once

// Vulkan SDK via GLFW
#define GLFW_INCLUDE_VULKAN

// GLFW Library
#include <GLFW/glfw3.h>

// Standard Template Library
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cstring>
#include <cstdint>
#include <cstdlib>
#include <optional>
#include <set>
#include <limits>
#include <algorithm>
#include <fstream>
#include <array>
#include <chrono>





// OpenGL Mathmatics Libary
#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

// Validation layers to enable.
const std::vector<const char*> validationLayers = { "VK_LAYER_KHRONOS_validation" };

// Required swapchain extensions.
const std::vector<const char*> deviceExtensions = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };

// Enable validation layers if not in release configuration.
#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif


// CONSTANTS
const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;
const int MAX_FRAMES_IN_FLIGHT = 2;

