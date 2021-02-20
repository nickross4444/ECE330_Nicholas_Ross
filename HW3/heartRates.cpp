#include<iostream>
//#include<string>
#include"heartRates.h"
//using std::cout;
//using std::cin;
//using std::string;
HeartRates::HeartRates(string _fName, string _lName, int _bM, int _bD, int _bY)
{
	fName = _fName;
	lName = _lName;
	bD = _bD;
	bM = _bM;
	bY = _bY;
}
void HeartRates::setFName(string _fName){fName = _fName;}
string HeartRates::getFName(){return fName;}

void HeartRates::setLName(string _lName){lName = _lName;}
string HeartRates::getLName(){return lName;}

void HeartRates::setbD(int _bD){bD = _bD;}
int HeartRates::getbD(){return bD;}

void HeartRates::setbM(int _bM){bM = _bM;}
int HeartRates::getbM(){return bM;}

void HeartRates::setbY(int _bY){bY = _bY;}
int HeartRates::getbY(){return bY;}

int HeartRates::getAge()
{
	int day, year, month, age;
	cout << "all entries should be integers!!\n";
	cout << "Enter year:";
	cin >> year;
	cout << "Enter month:";
	cin >> month;
	cout << "Enter day:";
	cin >> day;
	age = year - bY;
	if (month <= bM)
	{
		if(day < bD)
		{
			age--;
		}
	}
	return age;
}

int HeartRates::getMaxHR(int age)
{
	return 220 - age;
}
int HeartRates::getTargetHR(int age)
{
	return this->getMaxHR(age) * 0.65;
}
