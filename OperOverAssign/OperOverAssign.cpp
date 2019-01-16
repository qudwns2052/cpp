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

	CMyData& operator=(const CMyData &rhs)
	{
		if (this == &rhs)
			return *this;
		delete m_pnData;
		m_pnData = new int(*rhs.m_pnData);
	}

	CMyData& operator+=(const CMyData &rhs)
	{
		int *pnNewData = new int(*m_pnData);

		*pnNewData += *rhs.m_pnData;

		delete m_pnData;
		m_pnData = pnNewData;

		return *this;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	CMyData a(0), b(5);
	a = b;
	cout << a << endl;
	return 0;
}
