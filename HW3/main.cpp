#include<iostream>
#include"heartRates.h"

int main()
{
	int bD, bY, bM;
	string fName, lName;
	cout << "first name?";
	cin >> fName;
	cout << "last name?";
	cin >> lName;
	cout << "enter dates as integers!!\nbirth year?";
	cin >> bY;
	cout << "birth month?";
	cin >> bM;
	cout << "birth day?";
	cin >> bD;
	//one way to do it:	
	HeartRates h(fName, lName, bM, bD, bY);
	//other way:
	/*	
	HeartRates h;
	h.setFName(fName);
	h.setLName(lName);
	h.setbD(bD);
	h.setbM(bM);
	h.setbY(bY);
	*/
	int age = h.getAge();
	cout << "Name: " << h.getFName() <<' ' << h.getLName() << "\nBirthday: " << h.getbM()<<'/'<< h.getbD()<<'/'<<h.getbY() <<"\n";
	cout << "Age: \n" << age << "\n";
	cout << "Max HR: " << h.getMaxHR(age) << "\n";
	cout << "Target HR: " << h.getTargetHR(age) << "\n";

	return 0;
}
