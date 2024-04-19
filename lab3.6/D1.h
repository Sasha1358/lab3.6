#pragma once
#include "B1.h"
#include "B2.h"
#include "B3.h"
class D1: private B1, public B2, protected B3
{
	int d1;
public:
	D1();
	D1(int x, int y, int z, int j);
	~D1();
	void show_D1();
};

