#include "Texture.h"

// STB IMAGE LOADER LIBRARY
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

Texture::Texture(const char* path) {
    load();
}

void Texture::load() {
    pixels = stbi_load(TEXTURE_PATH.c_str(), &texWidth, &texHeight, &texChannels, STBI_rgb_alpha);
    
    mipLevels = static_cast<uint32_t>(std::floor(std::log2(std::max(texWidth, texHeight)))) + 1;
    if (!pixels) {
        throw std::runtime_error("failed to load texture image!");
    }
}

void Texture::free() {
    stbi_image_free(pixels);
}
