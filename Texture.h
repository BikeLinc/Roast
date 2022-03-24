#pragma once

#include "RoastHeader.h"

class Texture {
public:
	unsigned char* pixels;
	int texWidth, texHeight, texChannels;
	uint32_t mipLevels;

	Texture(const char* path);
	void load();
	void free();
};

