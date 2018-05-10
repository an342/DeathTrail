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
	for (int i = 0; i < 30; ++i)
		std::cout << "\n";
	cout << "you have awoke on the side of a dirt road." << endl;
	cout << "you don't see a reason to stay here so you " << endl;
	cout << "pick up your bag and walk downt he road." << endl;
	for (int i = 0; i < 25; i++)
	{
		encounters.push_back(NewEncounter(1));
	}
	
	if (debug)
	{
		for (int i = 0; i < encounters.size(); i++)
		{
			cout << "Encounter: " << i << " | enemies: " << encounters[i].enemyList.size() << endl;
		}
	}
	encList = encounters;
	encounterCount = 0;
	currentEnc = encList[encounterCount];
	
	if (currentEnc.EnemyCount() > 0)
	{
		cout << "You see a Zombie, what do you do?" << endl;
		state = IN_COMBAT;
	}
	else
	{
		cout << "the road is empty" << endl;
		state = OUT_OF_COMBAT;
	}

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

void MoveOn()
{
	cout << "You pack up your gear and move on to the next stop along the road" << endl;
	encounterCount++;
	currentEnc = encList[encounterCount];
	cout << currentEnc.GetDescription() << endl; 
	state = IN_COMBAT;
	cout << "you see another Zombie up the road what do you do?" << endl;
}

void Search()
{
	//Item temp;
}

void Attack()
{
	string input;
	vector <string> coms;

	if (debug)
	{
		cout << "enemylist size: " << currentEnc.enemyList.size() << endl;
	}

	for (int i = 0; i < currentEnc.enemyList.size(); i++)
	{
		cout << "+++++++++++++++++++++++++++++++++" << endl;
		cout << "| " << i << " | " << currentEnc.enemyList[i].GetName() << endl;
	}

	cout << "who do you want to attack?" << endl;

	getline(cin, input);

	coms = ParseInput(input);
	
	while (!is_number(coms[0]))
	{

		for (int i = 0; i < currentEnc.enemyList.size(); i++)
		{
			cout << "+++++++++++++++++++++++++++++++++" << endl;
			cout << "| " << i << " | " << currentEnc.enemyList[i].GetName() << endl;
		}

		cout << "who do you want to attack?" << endl;

		getline(cin, input);

		coms = ParseInput(input);

		if (coms[0] == "exit")
		{
			Exit();
		}
	}
	cout << "you attack dealing " << player.attack() << " damage!" << endl;
	if (debug)
		cout << "Enemy HP before:" << currentEnc.enemyList[stoi(coms[0])].GetHP();

	currentEnc.enemyList[stoi(coms[0])].Damage(player.attack());

	if (debug)
		cout << " | Enemy HP after:" << currentEnc.enemyList[stoi(coms[0])].GetHP() << endl;

	cout << "the Zombie attacks back!" << endl;

	cout << "you take " << currentEnc.enemyList[stoi(coms[0])].attack() << " damage! current health: " << player.damage(7) << endl;

	if (player.damage(0) == 0)
	{
		cout << "you have died" << endl;
		state = DEAD;
		return;
	}

	if (currentEnc.enemyList[0].GetHP() <= 0)
	{
		cout << "there are no more Zombies to fight, you can now move on" << endl;
		state = OUT_OF_COMBAT;
	}
	
}

void Target()
{

}


int DIFPars(vector <string> coms)
{

	int i = stoi(coms.front());
	return i;

}

int is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}