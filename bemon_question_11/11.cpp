#include <iostream>
using namespace std;

class MyIntStack 
{
	int p[10];
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() : tos(0) {}

	bool push(int n)
	{
		if (tos >= 10)
			return false;
		p[tos] = n;
		tos++;
		return true;
		
	}
	// ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
	bool pop(int &n)
	{
		if (tos <= 0)
			return false;
		tos--;
		n = p[tos];
		return true;
	}
	// ���Ͽ� n�� ����.������ ��� ������ false, �ƴϸ� true ����
};

int main()
{
	MyIntStack a;

	for (int i = 0; i < 11; i++) 
	{ // 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i))
			cout << i << ' '; // Ǫ�õ� �� ����
		else
			cout << endl << i + 1 << " ��° stack full" << endl;
	}

	int n;

	for (int i = 0; i < 11; i++) 
	{ // 11���� ���ϸ�, ���������� stack empty�� �ȴ�.
		if (a.pop(n)) cout << n << ' '; // �� �� �� ���
		else cout << endl << i + 1 << " ��° stack empty";
	}
	cout << endl;

	system("pause");
	
	return 0;

}