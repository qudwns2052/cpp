#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class Date
{
public:
	Date(string nParam) : str(nParam) {}
	Date(int x, int y, int z) : Year(x), Month(y), Day(z) {}

	void show(void)
	{
		int n;

		n = stoi(str);
		cout << n << "³â ";
		str.erase(0, 5);


		n = stoi(str);
		cout << n << "¿ù ";
		str.erase(0, 2);

		n = stoi(str);
		cout << n << "ÀÏ" << endl;

	}

	int getYear(void)
	{
		return Year;
	}
	int getMonth(void)
	{
		return Month;
	}
	int getDay(void)
	{
		return Day;
	}
private:
	string str;
	int Year, Month, Day;
};

int main(void)
{
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	system("pause");

	return 0;
}