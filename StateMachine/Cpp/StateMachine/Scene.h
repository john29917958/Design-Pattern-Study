#pragma once
#ifndef SCENE_H
#define SCENE_H
#include "SceneController.h"

class SceneController;

class Scene
{
public:
	Scene(SceneController* controller);
	virtual ~Scene();
	virtual void start() = 0;
	virtual void update() = 0;
	virtual void end() = 0;
protected:
	SceneController* controller_;
};

#endif