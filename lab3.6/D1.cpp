#include "D1.h"
#include <iostream>
using namespace std;
D1::D1() :B1(),B2(), B3(), d1(0) { }
D1::D1(int x, int y, int z, int j) : B1(y), B2(z), B3(j) { d1 = x; }
D1::~D1() {}
void D1::show_D1()
{
	cout << "class D1:" << endl;
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}