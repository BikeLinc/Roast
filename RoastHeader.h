#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

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

const uint32_t WIDTH = 800;
const uint32_t HEIGHT = 600;
const int MAX_FRAMES_IN_FLIGHT = 2;

// Validation layers to enable.
const std::vector<const char*> validationLayers = { "VK_LAYER_KHRONOS_validation" };

// Required swapchain extensions
const std::vector<const char*> deviceExtensions = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif