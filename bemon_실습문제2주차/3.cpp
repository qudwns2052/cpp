#include <iostream>
#include <string>
using namespace std;


class Person 
{
	int id;
public:
	Person(int id = 0) { this->id = id; }
	virtual ~Person() { cout << "id=" << id << endl; }

};

class Student : public Person 

{
	char * name;
public:
	Student(int id, const char *name) : Person(id) 
	{
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}

	~Student() 
	{
		cout << "name=" << name << endl;
		delete[] name;
	}
};

int main(void)
{
	Person *p = new Student(10, "¼Õ¿¬Àç");
	delete p;

	system("pause");

	return 0;
}

