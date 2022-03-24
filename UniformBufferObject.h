#pragma once

#include "RoastHeader.h"

struct UniformBufferObject {
    glm::mat4 model;
    glm::mat4 view;
    glm::mat4 proj;
    glm::vec3 viewPos;
    glm::vec3 lightColor;
    glm::vec3 lightPos;
};