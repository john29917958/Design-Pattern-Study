#include <iostream>
#include "StartScene.h"

StartScene::StartScene(SceneController* controller) : Scene(controller)
{
	
}

StartScene::~StartScene()
{
	
}

void StartScene::start()
{
	std::cout << "Start scene started" << std::endl;
}

void StartScene::update()
{
	std::cout << "Start scene updated" << std::endl;
}

void StartScene::end()
{
	std::cout << "Start scene ended" << std::endl;
}
