#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
class CMyData
{
public:
	CMyData(T param) : m_Data(param) {}
	T GetData() const { return m_Data; }

	operator T() { return m_Data; }
	void SetData(T param) { m_nData = param; }

private:
	T m_Data;
};



int _tmain(int argc, _TCHAR* argv[])
{
	CMyData<int> a(5);
	cout << a << endl;
	CMyData<double> b(123.45);
	cout << b << endl;

	CMyData<char*> c("Hello");
	cout << c << endl;
	return 0;
}
