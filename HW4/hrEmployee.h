
#ifndef HREMPLOYEE
#define HREMPLOYEE

#include"employee.h"

class HrEmployee : Employee
{
public:
  HrEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, float = 0);	// constructor
  
  void setRate(const float );			
  float getRate() const;			
  void setHrs(const float );			
  float getHrs() const;			
  void setOvertimeHrs(const float );			
  float getOvertimeHrs() const;			
  virtual void printEmployee();
  float calcSal(float, float = 0); 
  
private:
  float hourlyRate;
  float hrs = 0;
  float overtimeHrs = 0;
};

#endif
