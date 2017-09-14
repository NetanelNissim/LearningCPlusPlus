#include "stdafx.h"
#include "FileReader.h"
#include <windows.h>
//#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


string GetFileName()
{
	string prompt;
	cout << "Enter File Name:" << endl;
	cin >> prompt;
	return prompt;
}

ifstream GetFile(const string  prompt) {
	ifstream fin;
	fin.open(prompt.c_str(), ios::in);
	return fin;
}

string ReadFile(ifstream &fin)
{
	string line;
	while (getline(fin, line))
	{
		line += line;
	}
	fin.close();

	return line;
}