#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <vector>
#include <thread>
#include <windows.h>
#include <fstream>

#include "Main.h"
#include "InputParser.h"

using namespace std;

enum playerstate;


void Welcome()
{
	cout << "Welcome to Death Trail!" << endl;
	cout << "By Anthony 'nizzy2k11' Nizzardo" << endl;
	Sleep(2000);
	system("pause");
	Sleep(2000);
	cout << "Lets begin." << endl;
	cout << "Type 'play' to start a game or 'help' for more commands." << endl;
	state = MAIN_MENU;
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
	state = QUIT;
	breakwhile = true;
}

void Play()
{
	//int dificulty = 0;
	string input;
	vector <string> coms;
	vector <int> comsi;
	vector <Encounter> encounters;

	for (int i = 0; i < 25; i++)
	{
		encounters.push_back(NewEncounter(1));
	}
	for (int i = 0; i < encounters.size(); i++)
	{
		cout << "Enncounter: " << i <<" | enemies: " << encounters.at(i).enemies << endl;
	}
	encList = encounters;
	
}

void Debug()
{
	cout << "in debug" << endl;
	if (debug)
	{
		debug = false;
		cout << "Debug off" << endl;
		return;
	}
	else if (!debug)
	{
		debug = true;
		cout << "Debug on" << endl;
		return;
	}
}

int DIFPars(vector <string> coms)
{

	int i = stoi(coms.front());
	return i;

}

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}