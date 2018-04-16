#include<iostream>
#include <map>
#include <string>
#include "Commands.h"
#include "items.h"
using namespace std;

// main function 
// where the execution of program begins
enum statemachine
{
	NONE,
	MAINMENU,
	LOADING,
	OUT_OF_COMBAT,
	IN_COMBAT,
	DEAD
};



int main()
{
	string input;
	bool breakwhile = false;
	bool debug = true;
	map <string, int> commands =
	{
		{" ", 0},
		{ "help", 1 },
		{"whereami", 2},
		{"hint", 3},
		{"exit", 4}

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
			cout << "input: " << input << endl;
			cout << "command map: " << commands[input] << endl;
		}
		
		switch (commands[input])
		{
		case 0:
			cout << "command not recognized\n";
			break;
		case 1:
			// help command
			help();
			break;
		case 2:
			cout << "whereami command, not built yet" << '\n';
			break;
		case 3:
			cout << "hint command, not built yet" << '\n';
			break;
		case 4:
			cout << "exiting...\n";
			Sleep(2000);
			breakwhile = true;
			break;
		default:
			cout << "Input ERROR: defaut input switch triggered contact developer for assistance." << '\n';
			break;
		}
	}
	return 0;
}