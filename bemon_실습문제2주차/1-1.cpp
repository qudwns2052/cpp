#include <iostream>
#include <string>
using namespace std;

class Point 
{
	int x, y;
public:
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
	ColorPoint(int x, int y, string col) :Point(x,y) 
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

	ColorPoint cp(5, 5, "RED");
	cp.show();
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();

	system("pause");

	return 0;
}
