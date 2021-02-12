#pragma once
#include "Scene.h"

class StartScene : public Scene
{
public:
	StartScene(SceneController* controller);
	~StartScene();

	void start() override;
	void update() override;
	void end() override;
};