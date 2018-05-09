#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Main.h"
#include "InputParser.h"
using namespace std;


vector <string> ParseInput(string input)
{
	int count = 1;
	char c;
	vector <string> commands;
	string temp;


	if (debug)
		cout << "parser input: " << input << "  input length: " << input.length() <<endl;

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
			}
			count++;
			temp = "";
		}
	}

	if (debug)
	{
		cout << "DEBUG" << endl;
		for (size_t i = 0; i < commands.size(); i++)
			cout << "command: " << commands[i] << endl;
	}

	return commands;
}