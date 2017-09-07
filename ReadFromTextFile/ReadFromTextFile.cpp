// ReadFromTextFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <string.h>
#include <iostream>
 
using namespace std;

string openfilename(char *filter = "All Files (*.*)\0*.*\0", HWND owner = NULL);

int add(int x, int y); 

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
	int selection;
	do
	{
		cout << "Main Menu\n\n";
		cout << "Please make your selection\n";
		cout << "1 - open file dialog\n";
		cout << "2 - read text file\n";
		cout << "3 - show text\n";
		cout << "4 - Quit\n";

		cout << "Selection: ";
		cin >> selection;

		switch (selection) {
		case 1:
			cout << "open file dialog\n";
			cout << openfilename().c_str();
			break;
		case 2:
			cout << "read text file\n";
			break;
		case 3:
			cout << "show text\n";
			break;
		case 4:
			cout << "Goodbye!\n";
			break;
		default:
			cout << "Main Menu\n\n";
			cout << "Please make your selection\n";
			cout << "1 - open file dialog\n";
			cout << "2 - read text file\n";
			cout << "3 - show text\n";
			cout << "4 - Quit\n";
			cout << "Selection: ";
			cin >> selection;
		}
	} while (selection != 4);


	cin.get();
	return 0;
}

