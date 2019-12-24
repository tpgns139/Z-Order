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

	int	_currentFrameX;				//	프레임이미지 1개를 가지가 각각 다른 프레임을 유지하려고
	int	_currentFrameY;
public:
	player() {};
	~player() {};

	virtual HRESULT init();			//초기화 전용 함수
	virtual void release();			//메모리 해제 함수
	virtual void update();			//연산 전용 함수
	virtual void render();	//그리기 전용 함수


};

