#pragma once
#include "gameNode.h"
#include "starScene.h"
#include "selectScene.h"
#include "item1.h"
#include "player.h"
#include "Test.h"
#include"Object.h"
class playGround : public gameNode
{
	struct objOrder
	{
		int Ypos;
		Object* obj;

	};
private:
	//gameNode* _star;
	//gameNode* _select;
	//gameNode* _currentScene;
	item1* _item1;
	vector<objOrder> _allObjYpos;
	objOrder _ins;
	player* _player;
	Test* _test;
public:
	playGround();
	~playGround();

	virtual HRESULT init();			//�ʱ�ȭ ���� �Լ�
	virtual void release();			//�޸� ���� �Լ�
	virtual void update();			//���� ���� �Լ�
	virtual void render();	//�׸��� ���� �Լ�
	vector<objOrder> bubblesort	(vector<objOrder>_allObjYpos)
	{
		for (int i = 0; i < _allObjYpos.size() - 1; i++)
		{
			for (int j = i+1; j < _allObjYpos.size(); j++)
			{
				
				if (_allObjYpos[j].Ypos<= _allObjYpos[j - 1].Ypos)

				{
					objOrder temp=_allObjYpos[j];
					_allObjYpos[j] = _allObjYpos[j - 1];
					_allObjYpos[j - 1] = temp;
				}
			}
		}
		return _allObjYpos;
		
	}
};

