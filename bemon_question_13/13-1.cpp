#include <iostream>
#include <string>
using namespace std;

class Person 
{
	int id;
	double weight;
	string name;
public:
	Person() {}

	Person(int id, string name)
	{
		this->id = id;
		this->name = name;
	}

	Person(int id, string name, double weight)
	{
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show(void) 
	{ cout << id << ' ' << weight << ' ' << name << endl; }
};
int main(void) 
{
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();  // 1  20.5  Grace
	ashley.show();   // 2  20.5  Ashley
	helen.show();    // 3  32.5  Helen

	system("pause");

	return 0;
}
