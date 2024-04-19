#pragma once
#include "D1.h"
#include "D3.h"
class D2: public D1, private D3
{
	int d2;
public:
	D2();
	D2(int x, int y, int z, int j, int f, int g, int r);
	~D2();
	void show_D2();
};

