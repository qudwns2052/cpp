#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

typedef struct
{
	int Id;
	char Name[NAME_LEN];
	int Money;
}Account;

Account accArr[100];
int accNum = 0;

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			MakeAccount();
			break;
		case 2:
			DepositMoney();
			break;
		case 3:
			WithdrawMoney();
			break;
		case 4:
			ShowAllAccInfo();
			break;
		case 5:
			return 0;

		}
	}

	return 0;
}

void ShowMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택 ";
}

void MakeAccount(void)
{
	int Id, Money;
	char Name[NAME_LEN];

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";
	cin >> Id;
	cout << "이 름: ";
	cin >> Name;
	cout << "입금액: ";
	cin >> Money;
	cout << endl;

	accArr[accNum].Id = Id;
	accArr[accNum].Money = Money;
	strcpy(accArr[accNum].Name, Name);
	accNum++;
}

void DepositMoney(void)
{
	int i, Id, Money;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> Id;
	cout << "입금액: ";
	cin >> Money;
	for (i = 0; i < accNum; i++)
	{
		if (accArr[i].Id == Id)
		{
			accArr[i].Money += Money;
			cout << "입금완료" << endl;
			cout << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney(void)
{
	int i, Id, Money;
	cout << "[출   금]" << endl;
	cout << "계좌ID: ";
	cin >> Id;
	cout << "출금액: ";
	cin >> Money;
	for (i = 0; i < accNum; i++)
	{
		if (accArr[i].Id == Id)
		{
			if (Money > accArr[i].Money)
			{
				cout << "금액이 부족합니다. 잔여금액: " << accArr[i].Money << endl << endl;
				return;
			}
			accArr[i].Money -= Money;
			cout << "출금완료" << endl;
			cout << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo(void)
{
	int i;
	for (i = 0; i < accNum; i++)
	{
		cout << "계좌ID: " << accArr[i].Id << endl;
		cout << "이 름: " << accArr[i].Name << endl;
		cout << "잔 액: " << accArr[i].Money << endl;
		cout << endl;
	}
	cout << endl;
}