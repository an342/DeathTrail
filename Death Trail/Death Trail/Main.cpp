#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"
#include "InputParser.h"

using namespace std;

// main function 
// where the execution of program begins

bool debug = true;
bool breakwhile = false;

playerstate state = NONE;
Encounter currentEnc;
vector <Encounter> encList;

map <string, int> commands =
{
	{ " ", UNRECOGNIZED },
	{ "help", HELP },
	{ "whereami", WHEREAMI },
	{ "hint", HINT },
	{ "exit", EXIT },
	{ "load", LOAD },
	{ "attack", ATTACK },
	{ "use", USE },
	{ "inventory", INVENTORY },
	{ "moveon", MOVEON },
	{ "search", SEARCH },
	{ "select", SELECT },
	{ "drop", DROP },
	{ "exit", EXIT },
	{ "play", PLAY },
	{"debug", DEBUG}
};

int main()
{
	string input;
	
	vector <string> coms;

	
	//bool debug = true;
	
	

	Welcome();

	//runing while
	while (!breakwhile && state != QUIT)
	{
		cout << ": ";
		//cin >> input;
		getline(cin, input);
		
		if (debug)
		{
			cout << "DEBUG" << endl;
			cout << "input: " << input << endl;
			cout << "command map: " << commands[input] << endl;
		}

		coms = ParseInput(input);

		switch (state)
		{
		case NONE:
			cout << "NONE state, get help. this shouldn't happen." << endl;
			break;
		case MAIN_MENU:
			MainMenu( commands[input]);
			break;
		case LOADING:
			break;
		case OUT_OF_COMBAT:
			break;
		case IN_COMBAT:
			break;
		case DEAD:
			break;
		default:
			cout << "Default of state switch_________" << endl;
			break;
		}
	}
	return 0;
}