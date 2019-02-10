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
	Person * p; // Person �迭 ������
	int size; // Person �迭�� ũ��. ���� ������ ��
	string name;
	int i;
	
public:
	Family(string name, int size)
	{
		p = new Person[size];
		this->size = size;
		this->name = name;
	}
	// size ������ŭ Person �迭 ���� ����

	void setName(int i, string name)
	{
		p[i].setName(name);
	}
	
	void show(void)
	{
		cout << name << " ������ ������ ���� " << size << "���Դϴ�." << endl;
		for (i = 0; i < size; i++)
		{
			cout << p[i].getName() << '\t';
		}
		cout << endl;
	}
	// ��� ���� ������ ���
	
	~Family() 
	{
		delete[] p;
	};
};

int main(void)
{
	Family *simpson = new Family("Simpson", 3); // 3������ ������ Simpson ����
	
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	
	delete simpson;

	system("pause");

	return 0;
}
