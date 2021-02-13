#include "matrix_static.h"
#include <iostream>
using std::cin;
using std::cout;
int main() {
	int rowCount, colCount;
	cout << "row count?\n";
	cin >> rowCount;	
	cout << "column count?\n";
	cin >> colCount;
	matrix m = create_empty(rowCount, colCount);
	for(int i = 0; i < rowCount; i++) {
		for(int j = 0; j < colCount; j++) {
			cout << "value of " << i+1 <<","<< j+1 << " ?\n";
			T val;
			cin >> val;
			assign(i, j, &m, val);
		}
	}	
	cout << "your matrix:";
	matrix_print(m);
	matrix m_trans = transpose(m);
	cout << "transposed matrix:";
	matrix_print(m_trans);
	return 0;
}
