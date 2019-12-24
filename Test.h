#pragma once
#include"Object.h"

struct testenemy
{
	int x, y;
	RECT rc;
	image* _img;
};

class Test : public Object
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

	virtual int getTesty() { return te.y; }
	virtual image* getImage() { return te._img; }
};

