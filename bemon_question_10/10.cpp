#include <iostream>
#include <string>

using namespace std;

char & find(char a[], char c, bool& success)
{
	int i, strLen;
	strLen = strlen(a);

	for (i = 0; i < strLen; i++)
	{
		if (a[i] == c)
		{
			success = true;
			return a[i];
			
		}
		
	}

		return *a;	// ��� ��� ��ȯ�ϱ� ����
}


int main(void) 
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) 
	{
		cout << "M�� �߰��� �� ����" << endl;
		
		return 0;
	}

	loc = 'm'; // 'M' ��ġ�� 'm' ���

	cout << s << endl; // "mike"�� ��µ�
	
	system("pause");

	return 0;
}
