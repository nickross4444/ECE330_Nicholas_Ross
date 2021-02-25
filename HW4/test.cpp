/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"
#include "salEmployee.h"
#include "hrEmployee.h"

using namespace std;

int main() 
{
	Employee* eptr = 0;
	Employee
		e1 (001, "Jones", "Booker", "T", 22),
		e2 (002, "Hendrix", "Jimi", "NMI ", 14);
	eptr = &e1;
	eptr->printEmployee();
	eptr = &e2;
	eptr->printEmployee();
	
	SalEmployee
		s1(003, "John", "jimmy", "J", 22, 10000),
		s2(004, "Miguel", "James", "H", 11, 10000, 0.5);
	eptr = &s1;
	eptr->printEmployee();
	eptr = &s2;
	eptr->printEmployee();
	HrEmployee
		h1(003, "Gilbert", "Andrew", "I", 741, 15),
		h2(004, "Sweeton", "Josh", "J", 1, 12);
	h1.setHrs(10);
	h2.setHrs(40);
	h2.setOvertimeHrs(5);
	eptr = &h1;
	eptr->printEmployee();
	eptr = &h2;
	eptr->printEmployee();
	//HrEmploye


}
