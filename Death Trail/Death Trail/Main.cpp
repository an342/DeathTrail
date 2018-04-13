#include<iostream>
#include <map>
#include <string>
#include "functions.h"

using namespace std;

// main function 
// where the execution of program begins
int main()
{
	string input;
	bool breakwhile = false;
	map <string, int> commands =
	{
		{"test1", 0},
		{ "help", 1 },
		{"whereami", 2},
		{"hint", 3}

	};
	Welcome();
	// prints heelo world
	while (!breakwhile)
	{
		cout << "gimmie somthing: ";
		cin >> input;

		cout << "" << input << "/n ";
		//cout << input << '\n';
		switch (commands[input])
		{
		case 0:
			cout << "test command please ignore" << '\n';
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
		default:
			cout << "command not recognized" << '\n';
			break;
		}
	}
	return 0;
}