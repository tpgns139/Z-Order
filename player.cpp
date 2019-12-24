#include "stdafx.h"
#include "player.h"

HRESULT player::init()
{
	position.x = WINSIZEX / 2;
	position.y = WINSIZEY / 2;

	img = IMAGEMANAGER->findImage("idle");

	rc = RectMakeCenter(position.x, position.y,
		IMAGEMANAGER->findImage("idle")->getFrameWidth(),
		IMAGEMANAGER->findImage("idle")->getFrameHeight());

	count =_currentFrameX = _currentFrameY = 0;



	return S_OK;
}

void player::release()
{
}

void player::update()
{
	rc = RectMakeCenter(position.x, position.y,
		IMAGEMANAGER->findImage("idle")->getFrameWidth(),
		IMAGEMANAGER->findImage("idle")->getFrameHeight());

	if (KEYMANAGER->isStayKeyDown(VK_LEFT))
	{
		position.x -= 5;
	}
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT))position.x += 5;
	if (KEYMANAGER->isStayKeyDown(VK_UP)) position.y -= 5;
	if (KEYMANAGER->isStayKeyDown(VK_DOWN))position.y += 5;

	count++;

	if (count % 5 == 0)
	{
		if (_currentFrameX >= img->getMaxFrameX()) _currentFrameX = 0;

		img->setFrameX(_currentFrameX);			// setFrameX�� �����ϴ� ������ x���� �Ű������� �����ش�. 
		_currentFrameX++;								// ���� �̹����� ���� ���� ���� ������Ų��.
		count = 0;										// ī��Ʈ�� �ʱ�ȭ ���ش�.
	}
}

void player::render()
{
	if(KEYMANAGER->isToggleKey('1')) Rectangle(getMemDC(), rc);

	img->frameRender(getMemDC(), rc.right, rc.top);


}
