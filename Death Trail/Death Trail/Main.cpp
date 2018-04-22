#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"
#include "Commands.h"
#include "Items.h"
#include "InputParser.h"
#include "States.h"

using namespace std;

// main function 
// where the execution of program begins

bool debug = true;
playerstate state = NONE;

int main()
{
	string input;
	bool breakwhile = false;
	vector <string> coms;

	
	//bool debug = true;
	
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
		{ "exit", EXIT }
		 
	};

	Welcome();

	//runing while
	while (!breakwhile)
	{
		cout << "gimmie somthing: ";
		//cin >> input;
		getline(cin, input);
		
		if (debug)
		{
			cout << "DEBUG" << endl;
			cout << "input: " << input << endl;
			cout << "command map: " << commands[input] << endl;
		}
		coms = ParseInput(input);

		if (debug)
		{
			cout << "DEBUG" << endl;
			for (size_t i = 0; i < coms.size(); i++)
				cout << "command: " << coms[i] << endl;
		}
		switch (state)
		{
		case NONE:
			
			break;
		case MAIN_MENU:
			MainMenu( commands[input]);
			break;
		case LOADING:
			break;
		case OUT_OF_COMBAT:
			break;
		default:
			cout << "Default of state switch_________" << endl;
			break;
		}
	}
	return 0;
}