#pragma once
#include "scene.h"

class start_scene : public scene
{
public:
	start_scene(scene_controller* controller);
	~start_scene() = default;

	void start() override;
	void update() override;
	void end() override;
};
