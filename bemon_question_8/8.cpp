#include <iostream>
using namespace std;
#define M_PI 3.14159265358979323846

class Circle 
{
public:

	Circle() { rad = 0; }

	void setRadius(int radius) // �������� �����Ѵ�.
	{
		rad = radius;
	}
	double getArea() // ������ �����Ѵ�.
	{
		return rad * rad * M_PI;

	}
private:
	int rad; // ���� ������ ��

};

int main(void)
{
	int i, r;
	int cnt = 0;
	Circle arr[3];

	for (i = 0; i < 3; i++)
	{
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		if (r > 0)
		{
			arr[i].setRadius(r);
			if (arr[i].getArea() > 100)
				cnt++;
		}
		else
		{
			cout << "�������� ���� �����Դϴ�. ���� �������� �ٽ� �Է��Ͻÿ�." << endl;
			i--;
		}
	}

	cout << "������ 100���� ū ���� " << cnt << "���Դϴ�." << endl;



	system("pause");

	return 0;
}
