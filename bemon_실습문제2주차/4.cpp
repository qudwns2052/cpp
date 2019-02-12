#include <iostream>
#include <string>
using namespace std;

class Converter 
{
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter
{
	double dest;
	string str;

public:
	WonToDollar(double ratio) : Converter(ratio) {}

	virtual double convert(double src)
	{
		return dest = src * ratio;
	}
	virtual string getSourceString()
	{
		string str = "Dollar";
		return str;
	}
	virtual string getDestString()
	{
		string str = "Won";
		return str;
	}

};

class KmToMile : public Converter
{
	double dest;
	string str;
public:
	KmToMile (double ratio) : Converter(ratio) {}
	
	virtual double convert(double src)
	{
		return dest = src * ratio;
	}
	
	virtual string getSourceString()
	{
		string str = "Mile";
		return str;
	}
	virtual string getDestString()
	{
		string str = "Km";
		return str;
	}
	
};


int main(void) 
{
	WonToDollar wd(1010); // 1 달러에 1010원
	wd.run();
	KmToMile toMile(1.609344); // 1mile은 1.609344 Km
	toMile.run();

	system("pause");

	return 0;
}
