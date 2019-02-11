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

class MyQueue : public BaseArray
{
	int enidx;
	int deidx;
public:
	MyQueue(int mQ) : BaseArray(mQ)
	{
		enidx = 0;
		deidx = 0;
	}

	void enqueue(int n)
	{
		put(enidx++, n);
	}

	int capacity(void)
	{
		return getCapacity();
	}

	int length(void)
	{
		return (enidx - deidx);
	}

	int dequeue(void)
	{
		return get(deidx++);
	}

};

int main(void) 
{
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) 
	{
		cin >> n;
		mQ.enqueue(n); // ť�� ����
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) 
	{
		cout << mQ.dequeue() << ' '; // ť���� �����Ͽ� ���
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;

	system("pause");

	return 0;
}
