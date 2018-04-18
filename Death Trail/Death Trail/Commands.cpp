#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
#include <fstream>

#include "Commands.h"
#include "Main.h"

using namespace std;

void Welcome()
{
	cout << "Welcome to Death Trail!\n";
	cout << "By Anthony 'nizzy2k11' Nizzardo\n";
	Sleep(2000);
	system("pause");
	Sleep(2000);
	cout << "Lets begin.\n";
}

void help()
{

	ifstream myfile;
	string helpout;
	string line;


	myfile.open("help.txt");



	while (getline(myfile, line))
	{
		helpout += line + "\n";
	}
	myfile.close();
	cout << helpout << endl;
	return;
}

void whereami()
{

}

void attack()
{

}

void Exit()
{
	cout << "exiting...\n";
	Sleep(2000);
	//breakwhile = true;
}