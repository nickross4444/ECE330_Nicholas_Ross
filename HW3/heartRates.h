#ifndef heartRates_h
#define heartRates_h
#include<string>
using std::cout;
using std::cin;
using std::string;
class HeartRates 
{
	private:
		string fName, lName;
		int bD, bM, bY;
	public:
		HeartRates(string _fName, string _lName, int _bM, int _bD, int _bY);
		void setFName(string _fName);
		string getFName();

		void setLName(string _lName);
		string getLName();

		void setbD(int _bD);
		int getbD();

		void setbM(int _bM);
		int getbM();

		void setbY(int _bY);
		int getbY();

		int getAge();
		int getMaxHR(int age);
		int getTargetHR(int age);
};
#endif
