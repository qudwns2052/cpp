
#include "stdafx.h"
#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

void TestFunc(void)
{
	cout << "::TestFunc()" << endl;
}

namespace TEST
{
	void TestFunc(void)
	{
		cout << "TEST::TestFunc()" << endl;
	}
}

namespace MYDATA
{
	void TestFunc(void)
	{
		cout << "DATA::TestFunc()" << endl;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc();
	::TestFunc();
	TEST::TestFunc();
	MYDATA::TestFunc();


	return 0;
}