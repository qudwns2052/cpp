#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	virtual void PrintData()
	{
		cout << "CMyData: " << m_nData << endl;
	}

	void TestFunc()
	{
		cout << "***TestFunc()***" << endl;

		PrintData();
		cout << "**********" << endl;
	}

protected:
	int m_nData = 10;
};

class CMyDataEx : public CMyData
{
public:
	virtual void PrintData()
	{
		cout << "CMyDataEx: " << m_nData * 2 << endl;
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	CMyDataEx a;
	a.PrintData();

	CMyData &b = a;

	b.PrintData();

	a.TestFunc();
	return 0;
}
