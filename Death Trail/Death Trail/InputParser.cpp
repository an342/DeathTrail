#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"
#include "InputParser.h"
using namespace std;


vector <string> ParseInput(string input)
{
	int count = 0;
	char c;
	vector <string> commands;
	string temp;

	if (debug)
	{
		cout << "DEBUG" << endl;
		cout << "input: " << input << endl;
		cout << "command map: " << command[input] << endl;
		cout << "parser input: " << input << "  input length: " << input.length() << endl;
	}
		

	for (size_t i = 0; i < input.length(); i++)
	{
		c = input[i];
		if (debug)
			cout << c << endl;

		if (c != ' ')
			temp += c;
		else
		{
			commands.push_back(temp);
			if (debug)
			{
				cout << "arg: " << temp << endl;
				cout << "count: " << count << endl;
				cout << "cmd length: " << commands.size() << endl;
			}
			count++;
			temp = "";
		}
	}
	commands.push_back(temp);
	if (debug)
	{
		cout << "DEBUG" << endl;
		for (size_t i = 0; i < commands.size(); i++)
			cout << "command: " << commands[i] << endl;
	}

	return commands;
}