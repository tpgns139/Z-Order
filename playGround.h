#pragma once
#include "gameNode.h"
#include "starScene.h"
#include "selectScene.h"
<<<<<<< HEAD
#include "item1.h"
=======
#include "player.h"
>>>>>>> origin/gunhee

class playGround : public gameNode
{
private:
	//gameNode* _star;
	//gameNode* _select;
	//gameNode* _currentScene;
	item1* _item1;

	player* _player;

public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ ���� �Լ�
	virtual void release();			//�޸� ���� �Լ�
	virtual void update();			//���� ���� �Լ�
	virtual void render();	//�׸��� ���� �Լ�

};

