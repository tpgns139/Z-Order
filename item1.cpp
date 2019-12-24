#include "stdafx.h"
#include "item1.h"


item1::item1()
{
}


item1::~item1()
{
}

HRESULT item1::init()
{
	_item = IMAGEMANAGER->addImage("item1", "item1.bmp", 35, 39, true, RGB(255, 0, 255));
	//RectMakeCenter(_x , _y, 35, 39);
	_x = WINSIZEX / 2;
	_y = WINSIZEY / 2;
	return S_OK;
}

void item1::release()
{
}

void item1::update()
{
}

void item1::render()
{
	_item->render(getMemDC(), _x, _y);
}