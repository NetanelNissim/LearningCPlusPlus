#include "stdafx.h"
#include "OpenFile.h"
#include <windows.h>
//#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


ifstream GetFileName(const string  prompt) {
	ifstream fin;
	fin.open(prompt.c_str(), ios::in);
	return fin;
}