#pragma once
#include"gameNode.h"
class GameScene:public gameNode
{
private:
	int count;

	int currentX;

public:
	
	GameScene();
	~GameScene();
	HRESULT init();
	void update();
	void render();
	void release();
};

