#pragma once
#include "gameNode.h"

class player :public gameNode
{

private:

	RECT rc;
	POINT position;
	image* img;
	int count;
	int crrentX;

	int	_currentFrameX;				//	�������̹��� 1���� ������ ���� �ٸ� �������� �����Ϸ���
	int	_currentFrameY;
public:
	player() {};
	~player() {};

	virtual HRESULT init();			//�ʱ�ȭ ���� �Լ�
	virtual void release();			//�޸� ���� �Լ�
	virtual void update();			//���� ���� �Լ�
	virtual void render();	//�׸��� ���� �Լ�


};

