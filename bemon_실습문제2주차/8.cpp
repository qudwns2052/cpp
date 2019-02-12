#include <iostream>
#include <string>
using namespace std;


template <typename T>
T *remove(T drc[], int sizeSrc, T minus[], int sizeMinus, int& retSize)
{
	int i, j;
	int cnt = 0;
	for (i = 0; i < sizeSrc; i++)
		for (j = 0; j < sizeMinus; j++)
			if (drc[i] == minus[j])
				drc[i] = NULL;

	for (i = 0; i < sizeSrc; i++)
		if (drc[i] == NULL)
			cnt++;

	retSize = sizeSrc - cnt;

	T *arr = new T[retSize];

	int idx = 0;

	for(i=0;i<sizeSrc;i++)
		if (drc[i] != NULL)
		{
			arr[idx] = drc[i];
			idx++;
		}

	return arr;
}

int main(void)
{
	int drc[] = { 1,2,3,4,5,6,7 };
	int minus[] = { 3, 5, 7 };
	int *arr;
	int retSize;
	int i;

	arr = remove(drc, 7, minus, 3, retSize);
	
	for (i = 0; i < retSize; i++)
		cout << arr[i] << ' ';

	cout << endl;

	delete[] arr;

	system("pause");

	return 0;
}