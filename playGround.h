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

	virtual HRESULT init();			//�ʱ�ȭ ���� �Լ�
	virtual void release();			//�޸� ���� �Լ�
	virtual void update();			//���� ���� �Լ�
	virtual void render();	//�׸��� ���� �Լ�

};

