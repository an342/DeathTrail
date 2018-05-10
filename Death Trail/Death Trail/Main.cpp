#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"
#include "InputParser.h"

using namespace std;

// main function 
// where the execution of program begins

bool debug = false;
bool breakwhile = false;

playerstate state = NONE;
int encounterCount;
Encounter currentEnc;
vector <Encounter> encList;
Player player;

map <string, commands> command =
{
	{ " ", UNRECOGNIZED },
	{ "help", HELP },
	{ "whereami", WHEREAMI },
	{ "hint", HINT },
	{ "exit", EXIT },
	{ "load", LOAD },
	{ "attack", ATTACK },
	{ "target", TARGET },
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
		if (state != DEAD)
		{
			getline(cin, input);

			coms = ParseInput(input);
		}

		switch (state)
		{
		case NONE:
			cout << "NONE state, get help. this shouldn't happen." << endl;
			break;
		case MAIN_MENU:
			MainMenu(command[coms[0]]);
			break;
		case LOADING:
			//idk wtf i was to do here
			break;
		case OUT_OF_COMBAT:
			OOC(command[coms[0]]);
			break;
		case IN_COMBAT:
			INC(command[coms[0]]);
			break;
		case DEAD:
			Dead(command[coms[0]]);
			break;
		default:
			cout << "Default of state switch_________" << endl;
			break;
		}
	}
	return 0;
}