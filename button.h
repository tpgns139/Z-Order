#pragma once
#include "gameNode.h"

//�ݹ��Լ� == �Լ�������
typedef void(*CALLBACK_FUNCTION)(void);

//<Functional> ���̺귯���� ����ϸ� �۷ι� ������ ������ �ݹ��Լ��� �Ű������� ����� �� ����.
//std::bind, std::move, std::Function 

//callback & delegate <--- �������� ã�ƺ�����

//Lambda�� 

enum BUTTONDIRECTION
{
	BUTTONDIRECTION_NULL,
	BUTTONDIRECTION_UP,
	BUTTONDIRECTION_DOWN
};

class button : public gameNode
{
private:
	BUTTONDIRECTION _direction;

	const char* _imageName;
	image* _image;
	RECT _rc;

	float _x, _y;
	POINT _btnDownFramePoint;
	POINT _btnUpFramePoint;

	CALLBACK_FUNCTION _callbackFunction;

public:
	button();
	~button();

	HRESULT init(const char* imageName, int x, int y,
		POINT btnDownFramePoint, POINT btnUpFramePoint,
		CALLBACK_FUNCTION cbFunction);

	void release();
	void update();
	void render();
};

