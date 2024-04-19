#include "D2.h"
#include <iostream>
using namespace std;
D2::D2() :D1(), D3(), d2(0) { }
D2::D2(int x, int y, int z, int j, int f, int g, int r) : D1( y, z, j, f), D3(g,r) { d2 = x; }
D2::~D2() {}
void D2::show_D2()
{
	cout << "class D2:" << endl;
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}