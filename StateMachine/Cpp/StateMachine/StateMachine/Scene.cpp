#include "Scene.h"

Scene::Scene(SceneController* controller)
{
	controller_ = controller;
}

Scene::~Scene()
{
	controller_ = nullptr;
}
