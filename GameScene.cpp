#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}
HRESULT GameScene::init()
{
	IMAGEMANAGER->addFrameImage("ericIdle", "ericIdle.bmp", 0, 0, 336, 200, 4, 2, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("character", "character.bmp", 0, 0, 325, 200, 4, 2, true, RGB(255, 0, 255));


	IMAGEMANAGER->addFrameImage("Elevator", "Elevator.bmp", 0, 0, 400, 350, 4, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("character", "character.bmp", 0, 0, 325, 200, 4, 2, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("����", "����.bmp", 0, 0, 891, 73, 11, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("ThornBush", "ThornBush.bmp", 0, 0, 600, 97, 3, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("ElectricField", "ElectricField.bmp", 0, 0, 600, 27, 3, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("BlueTile", "BlueTile.bmp", 0, 0, 212, 53, 4, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("RedTile", "RedTile.bmp", 0, 0, 212, 53, 4, 1, true, RGB(255, 0, 255));

	count = 0;
	IMAGEMANAGER->addImage("���", "���.bmp", 70, 75, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("����", "����.bmp", 50, 56, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("�Ź�", "�Ź�.bmp", 50, 56, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("���", "Map.bmp", 4000, 1984, true, RGB(255, 0, 255));
	return S_OK;
}

void GameScene::update()
{
	count++;
	if (count % 5 == 0)
	{

		currentX++;
		if (currentX > IMAGEMANAGER->findImage("ThornBush")->getMaxFrameX())currentX = 0;
	}
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		cout << CAMERA->getCameraXpos() + _ptMouse.x << "," << CAMERA->getCameraYpos() + _ptMouse.y << endl;
	}
}

void GameScene::render()
{
	IMAGEMANAGER->findImage("���")->render(getMemDC(), 0, 0, CAMERA->getCameraXpos(), CAMERA->getCameraYpos(), WINSIZEX, WINSIZEY);



	IMAGEMANAGER->findImage("character")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);
	IMAGEMANAGER->findImage("ericIdle")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);


	//�� �Ŵ������� ������ �о������ �ؾ���
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2100 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 2750 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("Elevator")->frameRender(getMemDC(), 3400 - CAMERA->getCameraXpos(), 90 - CAMERA->getCameraYpos(), currentX, 0);

	IMAGEMANAGER->findImage("����")->frameRender(getMemDC(), 1800 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos(), 0, 0);

	IMAGEMANAGER->findImage("ThornBush")->frameRender(getMemDC(), 2350 - CAMERA->getCameraXpos(), 1810 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("ElectricField")->frameRender(getMemDC(), 2800 - CAMERA->getCameraXpos(), 1350 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 800 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 400, 27, currentX, 0);
	IMAGEMANAGER->findImage("ElectricField")->stretchFrameRender(getMemDC(), 1400 - CAMERA->getCameraXpos(), 100 - CAMERA->getCameraYpos(), 2100, 27, currentX, 0);

	IMAGEMANAGER->findImage("����")->render(getMemDC(), 2000 - CAMERA->getCameraXpos(), 1090 - CAMERA->getCameraYpos());




	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1323 - CAMERA->getCameraXpos(), 1014 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2424 - CAMERA->getCameraXpos(), 1214 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 2974 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3674 - CAMERA->getCameraXpos(), 1614 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 3524 - CAMERA->getCameraXpos(), 240 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 624 - CAMERA->getCameraXpos(), 315 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1424 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);
	IMAGEMANAGER->findImage("BlueTile")->frameRender(getMemDC(), 1923 - CAMERA->getCameraXpos(), 1715 - CAMERA->getCameraYpos(), currentX, 0);

	IMAGEMANAGER->findImage("RedTile")->frameRender(getMemDC(), 2624 - CAMERA->getCameraXpos(), 1040 - CAMERA->getCameraYpos(), currentX, 0);

}

void GameScene::release()
{

}


