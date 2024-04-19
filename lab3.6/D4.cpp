#include "D4.h"
#include <iostream>
using namespace std;
D4::D4() : D2(), d4(0) {}
D4::D4(int x, int y, int z, int j, int f, int g, int r, int q) : D2(y, z, j, f, g, r, q) { d4 = x; }
D4::~D4() {}
void D4::show_D4()
{
	cout << "class D4:" << endl;
	cout << "show_D4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}