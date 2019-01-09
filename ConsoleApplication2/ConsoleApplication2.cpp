#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest
{
private:
	int m_nData;

	static int m_nCount;

public:
	CTest(int nParam) : m_nData(nParam) { m_nCount++; }
	int GetData() { return m_nData; }
	void ResetCount() { m_nCount = 0; }

	static int GetCount()
	{
		return m_nCount;
	}
};

int CTest::m_nCount = 0;

int _tmain(int argc, _TCHAR* argv[])
{
	CTest a(5), b(10);

	cout << a.GetCount() << endl;
	b.ResetCount();

	cout << CTest::GetCount() << endl;

    return 0;
}
	
