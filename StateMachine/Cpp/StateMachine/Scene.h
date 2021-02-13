#pragma once
#ifndef SCENE_H
#define SCENE_H
#include "scene_controller.h"

class scene_controller;

class scene
{
public:
	scene(scene_controller* controller);
	virtual ~scene();
	virtual void start() = 0;
	virtual void update() = 0;
	virtual void end() = 0;
protected:
	scene_controller* controller_;
};

#endif