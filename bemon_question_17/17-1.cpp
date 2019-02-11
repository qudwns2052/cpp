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
	void show() 
	{
		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
	}
	string getTitle() { return title; }

	bool operator==(const int rhs)
	{
		if (price == rhs)
			return true;
		else
			return false;
	}

	bool operator==(const string rhs)
	{
		if (title.compare(rhs) == 0)
			return true;
		else
			return false;
	}

	bool operator==(const Book & rhs)
	{
		if (price == rhs.price && title == rhs.title && pages == rhs.pages)
			return true;
		else
			return false;
	}

};

int main(void)
{
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� �� 

	system("pause");

	return 0;
}
