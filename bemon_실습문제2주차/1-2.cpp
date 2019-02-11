#include <iostream>
#include <string>
using namespace std;

class Point
{
	int x, y;
public:
	Point(void) :x(0), y(0) {}
	Point(int x, int y) { this->x = x; this->y = y; }
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point
{
	string col;
public:

	ColorPoint() : Point() { col = "BLACK"; }

	ColorPoint(int x, int y) : Point(x,y) {}

	ColorPoint(int x, int y, string col) :Point(x, y)
	{
		this->col = col;
	}

	void setPoint(int x, int y)
	{
		move(x, y);
	}

	void setColor(string col)
	{
		this->col = col;
	}

	void show(void)
	{
		cout << getX() << endl;
		cout << getY() << endl;
		cout << col << endl;
	}
};

int main()
{

	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다. 

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); // cp를 출력한다.


	system("pause");

	return 0;
}
