#pragma once

#include "RoastHeader.h"

class Geometry {
public:
	const char* path;
	std::vector<Vertex> vertices;
	std::vector<uint32_t> indices;

	Geometry(const char* path);
	void load();

};
