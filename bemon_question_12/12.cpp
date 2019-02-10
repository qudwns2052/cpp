#include <iostream>
#include <string>
using namespace std;

class Buffer 
{
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) 
	{
		text += next; // text�� next ���ڿ� �����̱� 
	}
	void print(void) 
	{
		cout << text << endl;
	}
};

Buffer & append(Buffer & buf, string what)
{
	buf.add(what);

	return buf;
}

int main(void) 
{
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys"); // buf�� ���ڿ��� "Guys" ������
	temp.print(); // "HelloGuys" ���
	buf.print();  // "HelloGuys" ���

	system("pause");

	return 0;
}

