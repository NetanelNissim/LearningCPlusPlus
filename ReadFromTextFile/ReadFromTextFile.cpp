// ReadFromTextFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileReader.h"
#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
 
using namespace std;

string GetFileName();
ifstream GetFile(const string  prompt);
string ReadFile(ifstream &fin);

int main()
{
	ifstream fin;
	string fileName;
	string line;
    string prompt;

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
		    prompt=	GetFileName();
		    fin = GetFile(prompt);
			if (!fin.good()) {
			  cout << "Couldn’t open the file Or wrong file name!! " << endl;
			}
			break;
		case 2:
			if (prompt.empty()) { cout << " Mast 1 - open file dialog!!! " << endl; break; }
			line = ReadFile(fin); /* function don't return string!!!!!!! */
			cout << "Line:" << line << endl;
			break;
		case 3:
			if (line.empty()) { cout << " Mast 2 - read text file!!! " << endl; break; }
			cout << line << endl;
			break;
		case 4:
			cout << "Goodbye!"<< endl;
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

	cin.get();
	return 0;
}

