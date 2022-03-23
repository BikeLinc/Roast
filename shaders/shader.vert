#version 450

layout(binding = 0) uniform UniformBufferObject {
    mat4 model;
    mat4 view;
    mat4 proj;
    vec3 viewPos;
    vec3 lightColor;
    vec3 lightPos;
} ubo;

layout(location = 0) in vec3 inPosition;
layout(location = 1) in vec3 inNormal;
layout(location = 2) in vec2 inTexCoord;

layout(location = 0) out vec3 FragPos;
layout(location = 1) out vec3 Normal;
layout(location = 2) out vec2 TexCoord;

layout(location = 3) out vec3 LightColor;
layout(location = 4) out vec3 LightPos;

layout(location = 5) out vec3 ViewPos;

void main() {
    LightColor = ubo.lightColor;
    LightPos = ubo.lightPos;
    TexCoord = inTexCoord;
    FragPos = vec3(ubo.model * vec4(inPosition, 1.0));
    Normal = mat3(transpose(inverse(ubo.model))) * inNormal;
    gl_Position = ubo.proj * ubo.view * vec4(FragPos, 1.0);
}