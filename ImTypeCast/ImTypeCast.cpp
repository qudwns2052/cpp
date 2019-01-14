#include "stdafx.h"
#include <iostream>
using namespace std;

class CTestData
{
private:
	int m_nData = 0;

public:
	explicit CTestData(int nParam) : m_nData(nParam)
	{
		cout << "CTestData(int)" << endl;
	}

	CTestData(const CTestData &rhs) : m_nData(rhs.m_nData)
	{
		cout << "CTestData(const CTestData &)" << endl;
	}

	~CTestData()
	{
		cout << "~CTestData()" << endl;
	}
	int GetData() const { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }

};

void TestFunc(const CTestData &param)
{
	cout << "TestFunc(): " << param.GetData() << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "*****Begin*****" << endl;

	TestFunc(5);
	
	cout << "*****End*****" << endl;
	return 0;
}
