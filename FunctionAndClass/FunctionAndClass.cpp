#include "stdafx.h"
#include <iostream>
using namespace std;

class CTestData
{
private:
	int m_nData = 0;
public:
	CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	int GetData() const { return m_nData; }

	void SetData(int nParam) { m_nData = nParam; }

};

void TestFunc(CTestData &param)
{
	cout << "TestFunc()" << endl;

	param.SetData(20);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*****Begin*****" << endl;
	CTestData a(10);
	TestFunc(a);

	cout << "a: " << a.GetData() << endl;

	cout << "*****End*****" << endl;

    return 0;
}

