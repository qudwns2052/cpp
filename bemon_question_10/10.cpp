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

		return *a;	// 모든 경우 반환하기 위함
}


int main(void) 
{
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) 
	{
		cout << "M을 발견할 수 없다" << endl;
		
		return 0;
	}

	loc = 'm'; // 'M' 위치에 'm' 기록

	cout << s << endl; // "mike"가 출력됨
	
	system("pause");

	return 0;
}
