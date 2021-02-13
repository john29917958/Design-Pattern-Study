#ifndef START_SCENE_H
#define START_SCENE_H

#include <iostream>
#include "start_scene.h"

class scene;

start_scene::start_scene(scene_controller* controller) : scene(controller)
{
	
}

void start_scene::start()
{
	std::cout << "Start scene started" << std::endl;
}

void start_scene::update()
{
	std::cout << "Start scene updated" << std::endl;
}

void start_scene::end()
{
	std::cout << "Start scene ended" << std::endl;
}

#endif