#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
	char strWhat[10];
	int strLen;
	
	cout << "2 + 4 와 같이 입력해주세요." << endl;

	cin.getline(strWhat, 10, '\n');

	strLen = strlen(strWhat);

	
	int Fcnt = 1;
	int Fval, Lval;

	
	if (strWhat[Fcnt] != ' ')
	{
		Fcnt++;
		Fval = (10 * (strWhat[0] - '0')) + (strWhat[1] - '0');
	}
	else
		Fval = (strWhat[0] - '0');

	if (strWhat[strLen - 2] != ' ')
	{
		Lval = (10 * (strWhat[strLen - 2] - '0')) + (strWhat[strLen - 1] - '0');
	}
	else
		Lval = (strWhat[strLen - 1] - '0');

	int Val;

	switch (strWhat[Fcnt + 1])
	{
	case '+':
		Val = Fval + Lval;
		break;
	case '-':
		Val = Fval - Lval;
		break;
	case '*':
		Val = Fval * Lval;
		break;
	case '/':
		Val = Fval / Lval;
		break;
	case '%':
		Val = Fval % Lval;

	}

	
	int i;
	for (i = 0; i < strLen; i++)
		cout << strWhat[i];
	
	cout << " = " << Val << endl;
	


	system("pause");

	return 0;
}