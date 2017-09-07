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
	cout << "The first result is "<< z << '\n';
	cout << "The second result is " << subtraction(7, 2) << '\n';
	cout << "The third result is " << subtraction(x, y) << '\n';
	z = 4 + subtraction(x, y);
	cout << "The fourth result is " << z << '\n';

	z = 7;
	duplicate(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z;
	int num;
	cout << "Enter Number:";
	cin >> num;

	if (num > 0)
	{
		cout << "The Number > 0" << '\n'<< num;
	}
	else
	{
		cout << "Then Number < 0" << '\n' << num;
	}

	int n, fuctorial = 1;
	
	cout << "Enter Positive integer: ";
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		fuctorial *= i;
	}
		
	cout << "Facturial of " << n << " = " << fuctorial << '\n';
	
	int max[9] = { 1,2,100,4,5,6,500,8,9 };
	int resultMax =0;
	for (int i = 0; i < 9;i++)
	{
		if (resultMax < max[i]) resultMax = max[i];
	}

	cout << "The Max Number is: " << resultMax << '\n';
	char temp;
	cin >> temp;
	return 0;
}

