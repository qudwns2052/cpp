#include <stdio.h>
#include <iostream>
using namespace std;

class CoffeeMachine
{
public:
	CoffeeMachine(int x, int y, int z): x(x), y(y), z(z) 
	{
		show();
	}

	void drinkEspresso(void)
	{
		x--;
		y--;
		cout << "drinkEspresso(Ŀ��1, ��1 �Һ�)" << endl;
	}

	void show(void)
	{
		cout << "Ŀ��:" << x << " ��:" << y << " ����:" << z << endl;
	}

	void drinkAmericano(void)
	{
		x--;
		y -= 2;
		cout << "drinkAmericano(Ŀ��1, ��2 �Һ�)" << endl;
	}

	void drinkSugarCoffee(void)
	{
		x--;
		y -= 2;
		z--;
		cout << "drinkSugarCoffee(Ŀ��1, ��2, ����1 �Һ�)" << endl;
	}
	
	void fill(void)
	{
		x = 10;
		y = 10;
		z = 10;
		cout << "fill(Ŀ��, ��, ���� ��� 10)" << endl;
	}

private:
	int x, y, z;
};

int main(void)
{
	CoffeeMachine java(5, 10, 6); // Ŀ�Ƿ�:5, ����:10, ����:6���� �ʱ�ȭ
	java.drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�	
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���
	java.fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show(); // ���� Ŀ�� �ӽ��� ���� ���

	system("pause");

	return 0;
}
