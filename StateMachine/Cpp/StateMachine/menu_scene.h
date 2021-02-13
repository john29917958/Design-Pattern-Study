#pragma once
#ifndef MENU_SCENE_H
#define MENU_SCENE_H
#include <iostream>
#include "scene.h"

class scene;

class menu_scene : public scene
{
public:
	menu_scene(scene_controller* controller);
	~menu_scene() = default;

	void start() override;
	void update() override;
	void end() override;
};

#endif