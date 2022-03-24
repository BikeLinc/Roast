#include "Model.h"

Model::Model(const char* geometryPath, const char* diffuseMapPath) : 
	geometry(new Geometry(geometryPath)),
	texture(new Texture(diffuseMapPath)) {
	load();
}

Model::Model(Geometry* geometry, Texture* texture) : 
	geometry(geometry),
	texture(texture) {
	load();
}

void Model::load() {
	// Load Model Herer
}
