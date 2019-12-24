#pragma once
#include"gameNode.h"
class Object:public gameNode
{
public:
	Object();
	~Object();
	virtual image* getImage() { return nullptr; }
	virtual int getTesty() { return 0; }
};

