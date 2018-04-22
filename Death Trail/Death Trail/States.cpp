#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Main.h"
#include "Commands.h"
#include "Items.h"
#include "InputParser.h"

using namespace std;
void MainMenu(int input)
{
	switch (input)
	{
	case UNRECOGNIZED:												// add command recogniation function to give better responses
		cout << "command not recognized\n";
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
	default:
		cout << "you can not use that righ`t now!" << endl;
		//cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << endl;
		break;
	}
}

void Loading()
{

}

void OOC()
{

}

void INC()
{

}

void Dead()
{

}