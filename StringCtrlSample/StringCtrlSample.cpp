#include "stdafx.h"
#include "MyString.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CMyString strData;
	strData.SetString("Hello");
	cout << strData.GetString() << endl;

    return 0;
}

