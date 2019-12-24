#pragma once
#include"Object.h"
class item1 : public Object
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

	virtual image* getImage() { return _item; }
	virtual int getTesty() { return _y; }

};

