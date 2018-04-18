#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Main.h"
#include "Commands.h"
#include "Items.h"
#include "InputParser.h"
using namespace std;

// main function 
// where the execution of program begins

bool debug = true;

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

		switch (commands[input])
		{
		case UNRECOGNIZED:												// add command recogniation function to give better responses
			cout << "command not recognized\n";
			break;
		case HELP:
			// run help command
			help();
			break;
		case WHEREAMI:
			cout << "whereami command, not built yet" << '\n';
			break;
		case HINT:
			cout << "hint command, not built yet" << '\n';
			break;
		case EXIT:
			Exit();
			break;
		case ATTACK:
			cout << "ATTACK command, not built yet" << '\n';
			break;
		default:
			cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << endl;
			break;
		}
	}
	return 0;
}