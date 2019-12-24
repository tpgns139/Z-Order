#pragma once
#include "gameNode.h"
#include "starScene.h"
#include "selectScene.h"
#include "item1.h"

class playGround : public gameNode
{
private:
	//gameNode* _star;
	//gameNode* _select;
	//gameNode* _currentScene;
	item1* _item1;
public:
	playGround();
	~playGround();

	virtual HRESULT init();			//초기화 전용 함수
	virtual void release();			//메모리 해제 함수
	virtual void update();			//연산 전용 함수
	virtual void render();	//그리기 전용 함수

};

