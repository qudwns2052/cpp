#include <iostream>
#include <string>
using namespace std;

template<typename T>
T *concat(T a[], int sizea, T b[], int sizeb)
{
	T * arr = new T[sizea + sizeb];
	int i;
	int idx = sizea;

	for (i = 0; i < sizea; i++)
		arr[i] = a[i];

	for (i = 0; i < sizeb; i++, sizea++)
	{
		arr[sizea] = b[i];
	}
	return arr;
}

int main(void)
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6,7,8,9,10 };
	


	int * ptr = concat(a, 5, b, 5);

	for (int i = 0; i < 10; i++)
		cout << ptr[i] << ' ';

	cout << endl;


	delete[] ptr;

	system("pause");

	return 0;
}