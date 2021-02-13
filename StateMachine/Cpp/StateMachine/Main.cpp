#include <iostream>
#include "scene.h"

int main()
{
	std::cout << "Hello world!" << std::endl;
	scene_controller* controller = new scene_controller();
	scene* scene = new start_scene(controller);
	controller->set_scene(scene);
}
