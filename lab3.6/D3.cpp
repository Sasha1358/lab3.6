#include "D3.h"
#include <iostream>
using namespace std;
D3::D3() : B3(), d3(0) {}
D3::D3(int x, int y) : B3(y) { d3 = x; }
D3::~D3() {}
void D3::show_D3()
{
	cout << "class D3:" << endl;
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}