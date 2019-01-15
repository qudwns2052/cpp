#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(int &rParam)
{
	cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam)
{
	cout << "TestFunc(int &&)" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	TestFunc(3 + 4);

	return 0;
}
