#include <iostream>
#include <string>
using namespace std;

class Person 
{
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	string getName(void) { return name; }
	void setName(string name) { this->name = name; }
};

class Family 
{
	Person * p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string name;
	int i;
	
public:
	Family(string name, int size)
	{
		p = new Person[size];
		this->size = size;
		this->name = name;
	}
	// size 개수만큼 Person 배열 동적 생성

	void setName(int i, string name)
	{
		p[i].setName(name);
	}
	
	void show(void)
	{
		cout << name << " 가족은 다음과 같이 " << size << "명입니다." << endl;
		for (i = 0; i < size; i++)
		{
			cout << p[i].getName() << '\t';
		}
		cout << endl;
	}
	// 모든 가족 구성원 출력
	
	~Family() 
	{
		delete[] p;
	};
};

int main(void)
{
	Family *simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족
	
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	
	delete simpson;

	system("pause");

	return 0;
}
