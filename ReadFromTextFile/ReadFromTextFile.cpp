// ReadFromTextFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
 
using namespace std;

int subtraction(int a, int b)
{
	int r;
	r = a - b;
	return r;
}

void duplicate(int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

int main()
{
	int x = 1, y = 3, z=7;
	z = subtraction(7, 2);
	cout << "The first result is " << z << '\n';
	cout << "The second result is " << subtraction(7, 2) << '\n';
	cout << "The third result is " << subtraction(x, y) << '\n';
	z = 4 + subtraction(x, y);
	cout << "The fourth result is " << z << '\n';

	z = 7;
	duplicate(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z;

    return 0;
}

