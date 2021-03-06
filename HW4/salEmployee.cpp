#include <iostream>
#include <iomanip>


#include <string>


#include "salEmployee.h"

using namespace std;
SalEmployee::SalEmployee(long id, const string &last, const string &first, const string &initial, int dept, float _salary, float _fraction):Employee(id, last, first, initial, dept)
{
	salary = _salary;	//note: replace with member initializers
	fraction = _fraction;
}

void SalEmployee::setSal(const float _salary)
{
	salary = _salary;
}
float SalEmployee::getSal() const
{
	return salary;
}
void SalEmployee::setFraction(const float _fraction)
{
	fraction = _fraction;
}
float SalEmployee::getFraction() const
{
	return fraction;
}
void SalEmployee::printEmployee()
{
	Employee::printEmployee();
	//cout << endl;
	//cout << "Employee ID Number: " << getIdNum() << endl;
	//cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
	//	getMiddleInitial() <<"." << endl;
	//cout << "Dept Code: " << getDeptCode () << endl;	
	cout << "Salary: "<< salary<<"\n";
	cout << "Actual Salary: "<< calcSal(1)<<"\n";

}
float SalEmployee::calcSal(float monthsWorked)
{
	return salary * fraction * monthsWorked;
}
