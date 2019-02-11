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
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교 

	system("pause");

	return 0;
}
