#include <iostream>
#include <string>
using namespace std;

template<typename T>
void reverseArray(T x[], int length)
{
	T temp;
		
	int i;
	int cnt = length - 1;
	for (i = 0; i < length / 2; i++)
	{
		temp = x[i];
		x[i] = x[cnt-i];
		x[cnt - i] = temp;
	}

}


int main(void)
{
	int x[] = { 1,10,100,5,4 };

	reverseArray<int>(x, 5);

	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';

	cout << endl;


	system("pause");
	return 0;
}