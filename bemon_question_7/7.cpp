#include <iostream>
#include <string>
using namespace std;


int main(void)
{
	string text;
	char arr[50];
	int strLen;
	int i;
	while (1)
	{
		cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
		cout << ">>";
		getline(cin, text, '\n');
		strLen = text.length();
		strcpy(arr, text.c_str());

		if (text == "exit")
			break;

		for (i = strLen - 1; i >= 0; i--)
			cout << arr[i];
		cout << endl;

	}

	system("pause");

	return 0;
}