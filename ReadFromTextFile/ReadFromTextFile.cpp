// ReadFromTextFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FileReader.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	try
	{
		CFileReader FileReader("..\\Enjoy.txt");
		std::cout << FileReader.ReadFile() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	
	/*
	int selection = 0;

	do
	{
		cout << "Main Menu\n\n";
		cout << "Please make your selection\n";
		cout << "1 - open and read file dialog\n";		
		cout << "2 - show text\n";
		cout << "3 - Quit\n";

		cout << "Selection: ";
		cin >> selection;

		switch (selection) 
		{
			case 1:
			{
				cout << "Enter File Name:" << endl;
				cin >> prompt;

				prompt = GetFileName();
				fin = GetFile(prompt);

				if (!fin.good())
				{
					cout << "Couldn’t open the file Or wrong file name!! " << endl;
				}
			}
			break;			

			case 2:
			{
				if (line.empty())
				{
					cout << " Mast 2 - read text file!!! " << endl;
				}
				cout << line << endl;
			}
			break;

			case 3:
				cout << "Goodbye!"<< endl;
				return;				

			default:
				cout << "Main Menu\n\n";
				cout << "Please make your selection\n";
				cout << "1 - open and read file dialog\n";				
				cout << "2 - show text\n";
				cout << "3 - Quit\n";
				cout << "Selection: ";
				cin >> selection;
		}
	} while (selection != 3);
	*/

	return 0;
}

