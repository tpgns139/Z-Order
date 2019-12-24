#pragma once
#include "gameNode.h"
class item1 : public gameNode
{
private: 
	
	image* _item;
	int _x, _y;

public:
	item1();
	~item1();

	virtual HRESULT init();
	virtual void release();
	virtual void update();
	virtual void render();


};

