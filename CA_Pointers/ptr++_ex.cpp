#include <iostream>
using namespace std;
int main() {
	int i,j,k;
	i = 10;
	j = ++i;
	k=i++;
	cout <<"i="<<i<<endl;
	cout <<"j="<<j<<endl;
	cout <<"k="<<k<<endl;

	char shahnaz, mahnaz;
	char * p =&shahnaz;
	char * q =&mahnaz ;
	*p = 'h';
	*q=*(++p);
	cout <<"p="<<*p<<endl;
	cout <<"shahnaz="<<shahnaz<<endl;
	cout <<"q="<<*q<<endl;
	return 0; 
}
