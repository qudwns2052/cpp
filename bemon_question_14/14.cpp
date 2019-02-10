#include <iostream>
using namespace std;

class ArrayUtility2
{
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size)
	{
		int *Long = new int[size * 2];
		int i;
		for (i = 0; i < size; i++)
		{
			Long[i] = s1[i];
			Long[size + i] = s2[i];

		}


		return Long;
	}

	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴
	// 리턴하는 배열의 크기는 retSize 에 전달, retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int&retSize)
	{
		int i, j;

		retSize += size;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				if (s1[i] == s2[j])
				{
					s1[i] = NULL;
				}
				
		}

		for (i = 0; i < size; i++)
		{
			if (s1[i] == NULL)
				retSize--;
		}

		if (retSize == 0)
			return NULL;

		int cnt = 0;

		int *Sum = new int[retSize];

		for (i = 0; i < size; i++)
		{
			if(s1[i]!=NULL)
				Sum[cnt++] = s1[i];
		}


		return Sum;
	}
};

int main(void)
{
	ArrayUtility2 a;
	int arr1[5];
	int arr2[5];
	int * arr3;
	int i;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다. >> ";
	for (i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다. >> ";
	for (i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	arr3 = a.concat(arr1, arr2, 5);

	cout << "합친 정수 배열을 출력한다." << endl;

	for (i = 0; i < 10; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << endl;

	int num = 0;

	arr3 = a.remove(arr1, arr2, 5, num);
	
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << num << endl;
	
	
	for (i = 0; i < num; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << endl;

	delete[] arr3;

	system("pause");

	return 0;
}