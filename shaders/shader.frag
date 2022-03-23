#version 450

layout(location = 0) in vec3 FragPos;
layout(location = 1) in vec3 Normal;
layout(location = 2) in vec2 TexCoord;
layout(location = 3) in vec3 LightColor;
layout(location = 4) in vec3 LightPos;
layout(location = 5) in vec3 ViewPos;

layout(location = 0) out vec4 outColor;

layout(binding = 1) uniform sampler2D texSampler;

void main() {
    // CONSTANT VALUES (WILL CHANGE LATER)
    float MAT_SHININESS = 0.1;
    float MAT_SPECULAR = 0.1;
    
    // AMBIENT LIGHTING
    vec3 ambient = LightColor * texture(texSampler, TexCoord).rgb;
  	
    // DIFFUSE LIGHTING
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(LightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = texture(texSampler, TexCoord).rgb;
            
    vec3 result = ambient + diffuse;
    outColor = vec4(result,1.0);
}