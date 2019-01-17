#include "stdafx.h"
#include <iostream>
using namespace std;

class CMyData
{
public:
	int GetData() { return m_nData; }

	void SetData(int nParam) { m_nData = nParam; }

private:
	int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public:
	void SetData(int nParam)
	{
		if (nParam < 0)
			CMyData::SetData(0);
		if (nParam > 10)
			CMyData::SetData(10);
	}
};


int _tmain(int argc, _TCHAR* argv[])
{
	CMyDataEx a;
	CMyData &rData = a;
	rData.SetData(15);
	cout << rData.GetData() << endl;

	return 0;
}
