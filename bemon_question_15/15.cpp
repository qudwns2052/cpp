#include <iostream>
using namespace std;
#include <ctime>

class Random 
{
public:
	// 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static void seed() { srand((unsigned)time(0)); } // 씨드 설정
	static int nextInt(int min = 0, int max = 32767)
	{
		int num = ((rand() % (max - min)) + min);

		return num;
	}
	//min과 max 사이의 랜덤 정수 리턴
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
	}// 0보다 크거나 같고 1보다 적은 실수 리턴 
};

int main(void)
{
	int i;
	int length;
	
	int min, max;
	Random::seed();

	cout << "? 부터 ? 까지 ?개? :";
	cin >> min >> max >> length;


	cout << min << "에서 " << max << "까지 랜덤한 정수 " << length << "개를 출력합니다." << endl;

	for (i = 0; i < length; i++)
		cout << Random::nextInt(min, max) << ' ';

	cout << endl;

	cout << "알파벳을 랜덤하게 " << length << "개 출력합니다." << endl;
	
	for (i = 0; i < length; i++)
		cout << Random::nextAlphabet() << ' ';

	cout << endl;

	cout << "랜덤한 실수 " << length << "개를 출력합니다." << endl;

	for (i = 0; i < length; i++)
		cout << Random::nextDouble() << ' ';

	cout << endl;
	

	system("pause");

	return 0;
}