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
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "���� ";
}

void MakeAccount(void)
{
	int Id, Money;
	char Name[NAME_LEN];

	cout << "[���°���]" << endl;
	cout << "����ID: ";
	cin >> Id;
	cout << "�� ��: ";
	cin >> Name;
	cout << "�Աݾ�: ";
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
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> Id;
	cout << "�Աݾ�: ";
	cin >> Money;
	for (i = 0; i < accNum; i++)
	{
		if (accArr[i].Id == Id)
		{
			accArr[i].Money += Money;
			cout << "�ԱݿϷ�" << endl;
			cout << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void WithdrawMoney(void)
{
	int i, Id, Money;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> Id;
	cout << "��ݾ�: ";
	cin >> Money;
	for (i = 0; i < accNum; i++)
	{
		if (accArr[i].Id == Id)
		{
			if (Money > accArr[i].Money)
			{
				cout << "�ݾ��� �����մϴ�. �ܿ��ݾ�: " << accArr[i].Money << endl << endl;
				return;
			}
			accArr[i].Money -= Money;
			cout << "��ݿϷ�" << endl;
			cout << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo(void)
{
	int i;
	for (i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].Id << endl;
		cout << "�� ��: " << accArr[i].Name << endl;
		cout << "�� ��: " << accArr[i].Money << endl;
		cout << endl;
	}
	cout << endl;
}