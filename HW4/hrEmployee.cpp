#include <iostream>
#include <iomanip>

#include "hrEmployee.h"

using namespace std;
HrEmployee::HrEmployee(long id, const string &last, const string &first, const string &initial, int dept, float _rate):Employee(id, last, first, initial, dept)
{
	hourlyRate = _rate;
}

void HrEmployee::setRate(const float _rate)
{
	hourlyRate = _rate;
}
float HrEmployee::getRate() const
{
	return hourlyRate;
}
void HrEmployee::setHrs(const float _hrs)
{
	hrs = _hrs;
}
float HrEmployee::getOvertimeHrs() const
{
	return overtimeHrs;
}
void HrEmployee::setOvertimeHrs(const float _OHrs)
{
	overtimeHrs = _OHrs;
}
float HrEmployee::getHrs() const
{
	return hrs;
}
void HrEmployee::printHrEmployee()
{
	printEmployee();
	cout << "Rate: "<< hourlyRate<<"\n";
	cout << "Hours:" << hrs<<"\n";
	cout << "Overtime Hours:" << overtimeHrs<<"\n";
	cout << "Salary: " << calcSal(hrs, overtimeHrs)<<"\n";
}
float HrEmployee::calcSal(float _hrs, float _overtimeHrs)
{
	return (hourlyRate * _hrs)+(hourlyRate*1.5f*_overtimeHrs);
}
