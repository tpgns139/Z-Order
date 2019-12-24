#pragma once
#include "gameNode.h"

struct testenemy
{
	int x, y;
	RECT rc;
	image* _img;
};

class Test : public gameNode
{

private:
	testenemy te;
	int _count;
	int _currentFrameX;

public:
	Test();
	~Test();

	HRESULT init();
	void release();
	void update();
	void render();
};

