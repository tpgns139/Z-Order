#include "stdafx.h"
#include "Test.h"



Test::Test()
{
}


Test::~Test()
{
}

HRESULT Test::init()
{

	te._img = IMAGEMANAGER->addFrameImage("Erik", "¿¡¸¯idle.bmp", 336, 200, 4, 2, true, RGB(255, 0, 255));

	te._img->setX(WINSIZEX / 2);
	te._img->setY(WINSIZEY / 2+100);

	te.x = te._img->getX();
	te.y = te._img->getY();

	te.rc = RectMakeCenter(te._img->getCenterX(), te._img->getCenterY(), te._img->getFrameWidth(), te._img->getFrameHeight());
	_currentFrameX = 0;

	return S_OK;
}

void Test::release()
{
}

void Test::update()
{
	te.rc;
	_count++;
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
	{
		te.x += 5;

	}
	if (KEYMANAGER->isStayKeyDown(VK_LEFT))
	{
		te.x -= 5;


	}
	if (KEYMANAGER->isStayKeyDown(VK_DOWN))
	{
		te.y += 5;
	}
	if (KEYMANAGER->isStayKeyDown(VK_UP))
	{
		te.y -= 5;
	}
}

void Test::render()
{

	if (_count % 7 == 0) //±ôºýÀÌ´Â°Å Á¶Àý... ¾ÈµÊ
	{


		if (_currentFrameX >= te._img->getMaxFrameX()) _currentFrameX = 0;

		te._img->setFrameX(_currentFrameX);
		_currentFrameX++;
		_count = 0;
	}


	if (KEYMANAGER->isToggleKey(VK_F1))
	{
		Rectangle(getMemDC(), te.rc);
	}

	te._img->frameRender(getMemDC(), te.x, te.y);
}
