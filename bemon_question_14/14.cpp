#include <iostream>
using namespace std;

class ArrayUtility2
{
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ����
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

	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����
	// �����ϴ� �迭�� ũ��� retSize �� ����, retSize�� 0�� ��� NULL ����
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

	cout << "������ 5�� �Է��϶�. �迭 x�� �����Ѵ�. >> ";
	for (i = 0; i < 5; i++)
	{
		cin >> arr1[i];
	}

	cout << "������ 5�� �Է��϶�. �迭 y�� �����Ѵ�. >> ";
	for (i = 0; i < 5; i++)
	{
		cin >> arr2[i];
	}

	arr3 = a.concat(arr1, arr2, 5);

	cout << "��ģ ���� �迭�� ����Ѵ�." << endl;

	for (i = 0; i < 10; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << endl;

	int num = 0;

	arr3 = a.remove(arr1, arr2, 5, num);
	
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << num << endl;
	
	
	for (i = 0; i < num; i++)
	{
		cout << arr3[i] << ' ';
	}
	cout << endl;

	delete[] arr3;

	system("pause");

	return 0;
}