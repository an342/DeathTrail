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
int encounterCount;
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
	{ "debug", DEBUG}
};

int main()
{
	string input;
	
	vector <string> coms;


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
			MainMenu(commands[input]);
			break;
		case LOADING:
			//idk wtf i was to do here
			break;
		case OUT_OF_COMBAT:
			OOC(commands[input]);
			break;
		case IN_COMBAT:
			INC(commands[input]);
			break;
		case DEAD:
			Dead(commands[input]);
			break;
		default:
			cout << "Default of state switch_________" << endl;
			break;
		}
	}
	return 0;
}