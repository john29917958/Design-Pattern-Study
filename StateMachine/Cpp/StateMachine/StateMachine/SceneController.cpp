#include "SceneController.h"

SceneController::SceneController()
{

}

SceneController::~SceneController()
{

}

void SceneController::set_scene(Scene* scene)
{
	if (scene_ != nullptr)
	{
		scene_->end();
	}

	scene_ = scene;
	scene_->start();
}

void SceneController::update() const
{
	if (scene_ != nullptr)
	{
		scene_->update();
	}
}
