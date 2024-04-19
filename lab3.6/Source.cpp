#include <Windows.h>
#include <iostream>
#include "B1.h"
#include "B2.h"
#include "B3.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	B1 o0(777);
	cout << "B1 o0(777);" << endl;
	cout << "sizeof(B1) = " << sizeof(B1) << endl;
	cout << endl << "Ієрархія класу B1: " << endl;
	o0.show_B1();

	B2 o1(400);
	cout << "B2 o1(400);" << endl;
	cout << "sizeof(B2) = " << sizeof(B2) << endl;
	cout << endl << "Ієрархія класу B2: " << endl;
	o1.show_B2();

	B3 o3(111);
	cout << "B3 o1(111);" << endl;
	cout << "sizeof(B3) = " << sizeof(B3) << endl;
	cout << endl << "Ієрархія класу B3: " << endl;
	o3.show_B3();

	D1 o4(100, 200, 300, 400);
	cout << "D1 o4(100, 200, 300, 400);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o4.show_D1();

	D2 o5(1, 2, 3, 4, 5, 6, 7);
	cout << "D2 o5(1, 2, 3, 4, 5, 6, 7);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	o5.show_D2();

	D3 o6(88, 99);
	cout << "D3 o3(88, 99);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o6.show_D3();

	D4 o7(1, 2, 3, 4, 5, 6, 7, 8);
	cout << "D4 o4(1, 2, 3, 4, 5, 6, 7, 8);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "Ієрархія класу D4: " << endl;
	o7.show_D4();
	return 0;
}