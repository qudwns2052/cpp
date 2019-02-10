#include <stdio.h>
#include <iostream>
using namespace std;

class Tower
{
public:
	Tower(int nParam) : m_nData(nParam) {}
	Tower(void) : m_nData(1) {}

	int getHeight(void) const { return m_nData; }

private:
	int m_nData;

};

int main(void) 
{
	Tower myTower; // 1 미터
	Tower seoulTower(100); // 100 미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	system("pause");
	return 0;
}
