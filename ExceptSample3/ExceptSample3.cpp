#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int a = 100, b;
	cout << "Input number: ";
	cin >> b;

	try
	{
		if (b == 0)
			throw b;

		else
			cout << a / b << endl;
	}

	catch (int nExp)
	{
		cout << "ERROR: " << nExp << "���� ���� �� �����ϴ�." << endl;
	}

	return 0;
}
