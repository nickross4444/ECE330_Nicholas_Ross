
#ifndef SALEMPLOYEE
#define SALEMPLOYEE

#include"employee.h"

class SalEmployee : Employee
{
public:
  SalEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, float = 0, float = 1.0) ;	// constructor
  
  void setSal(const float );			
  float getSal() const;			
  void setFraction(const float );			
  float getFraction() const;			
  void printEmployee();
  float calcSal(float); 
  
private:
  float salary;		//monthly salary
  float fraction = 1;	//percentage of time worked
};

#endif
