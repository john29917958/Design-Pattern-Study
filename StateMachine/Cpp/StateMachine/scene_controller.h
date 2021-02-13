#pragma once
#ifndef SCENE_CONTROLLER_H
#define SCENE_CONTROLLER_H
#include "scene.h"

class scene;

class scene_controller
{
public:
	scene_controller();
	~scene_controller() = default;
	void set_scene(scene* scene, bool deleteOldScene = false);
	void update() const;
private:
	scene* scene_;
};

#endif