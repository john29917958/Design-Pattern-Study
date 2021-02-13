#pragma once
#ifndef SCENE_CONTROLLER_H
#define SCENE_CONTROLLER_H
#include "Scene.h"

class Scene;

class SceneController
{
public:
	SceneController();
	~SceneController();
	void set_scene(Scene* scene);
	void update() const;
private:
	Scene* scene_;
};

#endif