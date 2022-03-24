#pragma once

// GLOBAL INCLUDES ----------------------------------------------------

// VULKAN
#define GLFW_INCLUDE_VULKAN
// GLFW
#include <GLFW/glfw3.h>
// STL
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
#include <unordered_map>
// GLM
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/hash.hpp>

// GLOBAL VARIABLES ----------------------------------------------------

// REQUIRED KHR SWAPCHAIN EXTENSIOISN
const std::vector<const char*> deviceExtensions = { VK_KHR_SWAPCHAIN_EXTENSION_NAME };

// USE VALIDATION LAYERS WHILE IN DEBUG MODE
// DISABLE VALIDATION LAYERS WHILE IN NDEBUG (NOT DEBUG) MODE
#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

// VALIDATION LAYERS TO REQUEST.
const std::vector<const char*> validationLayers = { "VK_LAYER_KHRONOS_validation" };

// DEFAULT WINDOW CONSTANTS
const int MAX_FRAMES_IN_FLIGHT = 2;

// DEFAULT MODEL CONSTANTS
const std::string MODEL_PATH = "models/viking_room.obj";
const std::string TEXTURE_PATH = "textures/viking_room.png";

// ENGINE INCLIDES ----------------------------------------------------

#include "UniformBufferObject.h"
#include "Vertex.h"
#include "Geometry.h"
#include "Texture.h"
#include "Model.h"
#include "Window.h"

