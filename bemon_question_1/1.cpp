#include <stdio.h>
#include <iostream>
using namespace std;

int HowMuch(char what);
int what(int Money);

int HowMuch(char what)
{
	int cnt = 0;

	if (what == 'A')
		cnt += 2300;
	else if (what == 'E')
		cnt += 2000;
	else if (what == 'C')
		cnt += 2500;
	else
	{
		cout << "�߸� �Է��ϼ̽��ϴ�" << endl;
	}

	return cnt;
}

int what(int Money, int MyMoney)
{
	if (MyMoney >= 20000)
		return 0;

	char what;

	cout << "A? E? C?: ";
	cin >> what;

	Money += HowMuch(what);

	return Money;
}


int main(void)
{
	int MyMoney = 0;
	int Money;
	while (MyMoney < 20000)
	{
		Money = 0;
		MyMoney += what(Money, MyMoney);
		cout << "���� �� ��: " << MyMoney << endl;
	}
	

	cout << "���� �� �ݾƿ�" << endl;

	system("pause");

	return 0;
}
