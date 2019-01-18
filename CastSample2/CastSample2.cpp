#include "stdafx.h"
#include <iostream>
using namespace std;

class CShape
{
public:
	CShape(){}
	virtual ~CShape() {}
	virtual void Draw() { cout << "CShape::Draw()" << endl; }
};

class CRectangle : public CShape
{
public:
	virtual void Draw() { cout << "CRectangle::Draw()" << endl; }
};

class CCircle : public CShape
{
public:
	virtual void Draw() { cout << "CCircle::Draw()" << endl; }
};


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "���� ��ȣ�� �Է��ϼ���. [1:�簢��, 2:��]: " << endl;
	int nInput = 0;
	cin >> nInput;

	CShape *pShape = nullptr;
	if (nInput == 1)
		pShape = new CRectangle;

	else if (nInput == 2)
		pShape = new CCircle;
	else
		pShape = new CShape;

	pShape->Draw();


	return 0;
}
