#include <iostream>
#include <string>
using namespace std;

class BaseArray
{
private:
	int capacity; // ���� �Ҵ�� �޸� �뷮
	int *mem;

protected:

	BaseArray(int capacity = 100)
	{
		this->capacity = capacity;
		mem = new int[capacity];
	}

	~BaseArray() { delete[] mem; }

	void put(int index, int val) { mem[index] = val; }

	int get(int index) { return mem[index]; }

	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray
{
	int idx;
	
public:
	MyStack(int len) : BaseArray(len) 
	{
		idx = 0;
	}

	void push(int n)
	{
		put(idx++, n);
	}

	int pop(void)
	{
		return get(--idx);
	}

	int capacity(void)
	{
		return getCapacity();
	}

	int length(void)
	{
		return idx;
	}
};

int main(void) 
{
	MyStack mStack(100);

	int n;

	cout << "���ÿ� ������ 5���� ������ �Է��϶�>> ";

	for (int i = 0; i < 5; i++) 
	{
		cin >> n;
		mStack.push(n); // ���ÿ� Ǫ��
	}

	cout << "���� �뷮:" << mStack.capacity() << ", ���� ũ��:" << mStack.length() << endl;
	cout << "������ ��� ���Ҹ� ���Ͽ� ����Ѵ�>> ";

	while (mStack.length() != 0) 
	{
		cout << mStack.pop() << ' '; // ���ÿ��� ��
	}

	cout << endl << "������ ���� ũ�� : " << mStack.length() << endl;

	system("pause");

	return 0;
}
