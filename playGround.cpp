#include "stdafx.h"
#include "playGround.h"


playGround::playGround()
{
}


playGround::~playGround()
{
}

//�ʱ�ȭ�� ����� �ض�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	IMAGEMANAGER->addImage("���", "����.bmp", WINSIZEX, WINSIZEY, false, RGB(0, 0, 0));
	IMAGEMANAGER->addFrameImage("battle", "battle.bmp", 0, 0, 1536, 79, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("��ư", "button.bmp", 0, 0, 122, 62, 1, 2, true, RGB(255, 0, 255));


	SCENEMANAGER->addScene("��Ÿ��", new starScene);
	SCENEMANAGER->addScene("����Ʈ��", new selectScene);

	SCENEMANAGER->changeScene("����Ʈ��");



	_item1 =  new item1;
	_item1->init();
	_player = new player;
	_player->init();
	_test = new Test;
	_test->init();

	//_star = new starScene;
	//_star->init();

	//_select = new selectScene;
	//_select->init();

	//_currentScene = _select;

	return S_OK;
}

//�޸� ������ ����� �ض�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::release()
{
	gameNode::release();

	
}

//������ ����� �ض�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::update()
{
	gameNode::update();
	_test->update();
	//if (KEYMANAGER->isOnceKeyDown(VK_F1)) _currentScene = _select;
	//if (KEYMANAGER->isOnceKeyDown(VK_F2)) _currentScene = _star;


	

	//_currentScene->update();

	SCENEMANAGER->update();
}

//����� �׷���!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
	//==================================================

	IMAGEMANAGER->findImage("���")->render(getMemDC());
	
	_item1->render();


	//_currentScene->render();
	
	_test->render();
	SCENEMANAGER->render();
	//===================================================
	//�� ���ߴ�
	_backBuffer->render(getHDC(), 0, 0);
}
