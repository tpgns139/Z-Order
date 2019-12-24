#include "stdafx.h"
#include "playGround.h"


playGround::playGround()
{
}


playGround::~playGround()
{
}

//초기화는 여기다 해라!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
HRESULT playGround::init()
{
	gameNode::init(true);

	IMAGEMANAGER->addImage("배경", "우주.bmp", WINSIZEX, WINSIZEY, false, RGB(0, 0, 0));
	IMAGEMANAGER->addFrameImage("battle", "battle.bmp", 0, 0, 1536, 79, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("버튼", "button.bmp", 0, 0, 122, 62, 1, 2, true, RGB(255, 0, 255));


	SCENEMANAGER->addScene("스타씬", new starScene);
	SCENEMANAGER->addScene("셀렉트씬", new selectScene);

	SCENEMANAGER->changeScene("셀렉트씬");



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

//메모리 해제는 여기다 해라!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::release()
{
	gameNode::release();

	
}

//연산은 여기다 해라!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::update()
{
	gameNode::update();
	_test->update();
	//if (KEYMANAGER->isOnceKeyDown(VK_F1)) _currentScene = _select;
	//if (KEYMANAGER->isOnceKeyDown(VK_F2)) _currentScene = _star;


	

	//_currentScene->update();

	SCENEMANAGER->update();
}

//여기다 그려라!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void playGround::render()
{
	PatBlt(getMemDC(), 0, 0, WINSIZEX, WINSIZEY, WHITENESS);
	//==================================================

	IMAGEMANAGER->findImage("배경")->render(getMemDC());
	
	_item1->render();


	//_currentScene->render();
	
	_test->render();
	SCENEMANAGER->render();
	//===================================================
	//딱 말했다
	_backBuffer->render(getHDC(), 0, 0);
}
