#include <iostream>
using std::cout;
class MyClass
{
	private:
		int counter;
	public:
		void Foo()
		{
			cout << "Foo" << std::endl;
		}
		void Foo() const
		{
			cout << "Foo const" << std::endl;
		}
};
int main()
{
	MyClass cc;
	const MyClass ccc = cc;
	cc.Foo();
	ccc.Foo();
}
