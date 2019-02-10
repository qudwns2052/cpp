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
		cout << "drinkEspresso(커피1, 물1 소비)" << endl;
	}

	void show(void)
	{
		cout << "커피:" << x << " 물:" << y << " 설탕:" << z << endl;
	}

	void drinkAmericano(void)
	{
		x--;
		y -= 2;
		cout << "drinkAmericano(커피1, 물2 소비)" << endl;
	}

	void drinkSugarCoffee(void)
	{
		x--;
		y -= 2;
		z--;
		cout << "drinkSugarCoffee(커피1, 물2, 설탕1 소비)" << endl;
	}
	
	void fill(void)
	{
		x = 10;
		y = 10;
		z = 10;
		cout << "fill(커피, 물, 설탕 모두 10)" << endl;
	}

private:
	int x, y, z;
};

int main(void)
{
	CoffeeMachine java(5, 10, 6); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비	
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력

	system("pause");

	return 0;
}
