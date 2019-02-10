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
	Tower myTower; // 1 ����
	Tower seoulTower(100); // 100 ����
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

	system("pause");
	return 0;
}
