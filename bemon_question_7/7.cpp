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
		cout << "�Ʒ� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;
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