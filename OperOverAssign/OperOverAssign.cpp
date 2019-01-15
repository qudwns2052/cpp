#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
private:
	int *m_pnData = nullptr;

public:
	explicit CMyData(int nParam)
	{
		m_pnData = new int(nParam);
	}

	~CMyData() { delete m_pnData; }
	
	operator int() { return *m_pnData; }

	void operator=(const CMyData &rhs)
	{
		delete m_pnData;
		m_pnData = new int(*rhs.m_pnData);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(0), b(5);
	a = b;
	cout << a << endl;
	return 0;
}
