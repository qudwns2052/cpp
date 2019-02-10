#include <iostream>
using namespace std;
#define M_PI 3.14159265358979323846

class Circle 
{
public:

	Circle() { rad = 0; }

	void setRadius(int radius) // 반지름을 설정한다.
	{
		rad = radius;
	}
	double getArea() // 면적을 리턴한다.
	{
		return rad * rad * M_PI;

	}
private:
	int rad; // 원의 반지름 값

};

int main(void)
{
	int i, r;
	int cnt = 0;
	Circle arr[3];

	for (i = 0; i < 3; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		if (r > 0)
		{
			arr[i].setRadius(r);
			if (arr[i].getArea() > 100)
				cnt++;
		}
		else
		{
			cout << "반지름의 값이 음수입니다. 원의 반지름을 다시 입력하시오." << endl;
			i--;
		}
	}

	cout << "면적이 100보다 큰 원은 " << cnt << "개입니다." << endl;



	system("pause");

	return 0;
}
