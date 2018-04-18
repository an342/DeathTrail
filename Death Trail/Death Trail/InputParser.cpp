#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Main.h"
using namespace std;


vector <string> ParseInput(string input)
{
	int count = 1;
	char c;
	vector <string> commands;
	string temp;

	cout << "parser input: " << input << "  input length: " << input.length() <<endl;
	for (size_t i = 0; i < input.length(); i++)
	{
		c = input[i];
		cout << c << endl;
		if (c != ' ')
			temp += c;
		else
		{
			commands.push_back(temp);
			cout << "arg: " << temp << endl;
			cout << "count: " << count << endl;
			count++;
			temp = "";
		}
	}

	return commands;
}