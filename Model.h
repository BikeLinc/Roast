#pragma once

#include "RoastHeader.h"

class Geometry;
class Texture;

class Model {
public:
	Geometry* geometry;
	Texture* texture;

	Model(const char* geometryPath, const char* diffuseMapPath);
	Model(Geometry* geometry, Texture* texture);

private:
	void load();

};
