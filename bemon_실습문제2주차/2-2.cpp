#include <iostream>
#include <string>
using namespace std;

class BaseArray
{
private:
	int capacity; // 동적 할당된 메모리 용량
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

	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";

	for (int i = 0; i < 5; i++) 
	{
		cin >> n;
		mStack.push(n); // 스택에 푸시
	}

	cout << "스택 용량:" << mStack.capacity() << ", 스택 크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";

	while (mStack.length() != 0) 
	{
		cout << mStack.pop() << ' '; // 스택에서 팝
	}

	cout << endl << "스택의 현재 크기 : " << mStack.length() << endl;

	system("pause");

	return 0;
}
