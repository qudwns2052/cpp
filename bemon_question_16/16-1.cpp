#include <iostream>
#include <string>
using namespace std;

class Book 
{
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) 
	{
		this->title = title; this->price = price; 	this->pages = pages;
	}

	Book(const Book &&rhs)
	{

	}

	Book & operator+=(int rhs)
	{
		price += rhs;

		return *this;
	}

	Book & operator-=(int rhs)
	{
		price -= rhs;

		return *this;
	}


	void show() 
	{
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }
};

int main()
{
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����
	a.show();
	b.show();

	system("pause");

	return 0;
}
