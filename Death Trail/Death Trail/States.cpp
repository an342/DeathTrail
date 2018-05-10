#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"


using namespace std;




void MainMenu(int input)
{
	switch (input)
	{
	case UNRECOGNIZED:												// add command recogniation function to give better responses
		cout << "command not recognized.\n";
		break;
	case HELP:
		// run help command
		help();
		break;
	case WHEREAMI:
		cout << "You are in the main menu, use 'help' if you don't know what to do!" << '\n';
		break;
	case HINT:
		cout << "use 'help' if you don't know what to do!" << '\n';
		break;
	case EXIT:
		Exit();
		break;
	case PLAY:
		Play();
		break;
	case DEBUG:
		Debug();
		break;
	default:
		cout << "you can not use that righ`t now!" << endl;
		//cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << endl;
		break;
	}
}

void Loading()
{

}

void OOC(int input)
{
	
	switch (input)
	{
	case UNRECOGNIZED:												// add command recogniation function to give better responses
		cout << "command not recognized.\n";
		break;
	case HELP:
		// run help command
		help();
		break;
	case WHEREAMI:
		cout << "You are out of combat, there might be somthing interesting around" << endl;
		break;
	case HINT:
		cout << "if you can't find anything to do use 'moveon' to go to the next area" << endl;
		break;
	case EXIT:
		Exit();
		break;
	case MOVEON:
		MoveOn();
		break;
	case SEARCH:
		Search();
		break;
	case DEBUG:
		Debug();
		break;
	default:
		cout << "you can not use that righ`t now!" << endl;
		//cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << endl;
		break;
	}
}

void INC(int input)
{
	
	switch (input)
	{
	case UNRECOGNIZED:												// add command recogniation function to give better responses
		cout << "command not recognized.\n";
		break;
	case HELP:
		help();
		break;
	case WHEREAMI:
		cout << "You are in combat, ATTACK!" << endl;
		break;
	case HINT:
		cout << "beat the enemies to look the encoutner and then you can move on." << endl;
		break;
	case EXIT:
		Exit();
		break;
	case ATTACK:
		Attack();
		break;
	case TARGET:
		Target();
		break;
	case DEBUG:
		Debug();
		break;
	default:
		cout << "you can not use that righ`t now!" << endl;
		//cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << endl;
		break;
	}
}

void Dead(int input)
{
	cout << "your body lies dead on the side of the desert road, soon to join the wandering dead you faught to defeat." << endl;
	Sleep(15000);
	Exit();
}