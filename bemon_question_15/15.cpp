#include <iostream>
using namespace std;
#include <ctime>

class Random 
{
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767)
	{
		int num = ((rand() % (max - min)) + min);

		return num;
	}
	//min�� max ������ ���� ���� ����
	static char nextAlphabet()
	{
		char ch = rand() % 2;

		if (ch == 0)
		{
			ch = rand() % 26 + 65;
		}
		else
		{
			ch = rand() % 26 + 97;
		}

		return ch;
	}
	static double nextDouble()
	{
		double dou = rand() / (double)32768;

		return dou;
	}// 0���� ũ�ų� ���� 1���� ���� �Ǽ� ���� 
};

int main(void)
{
	int i;
	int length;
	
	int min, max;
	Random::seed();

	cout << "? ���� ? ���� ?��? :";
	cin >> min >> max >> length;


	cout << min << "���� " << max << "���� ������ ���� " << length << "���� ����մϴ�." << endl;

	for (i = 0; i < length; i++)
		cout << Random::nextInt(min, max) << ' ';

	cout << endl;

	cout << "���ĺ��� �����ϰ� " << length << "�� ����մϴ�." << endl;
	
	for (i = 0; i < length; i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl;

	cout << "������ �Ǽ� " << length << "���� ����մϴ�." << endl;

	for (i = 0; i < length; i++)
		cout << Random::nextDouble() << ' ';

	cout << endl;
	

	system("pause");

	return 0;
}