#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
#include <fstream>

using namespace std;

enum commands
{
	UNRECOGNIZED,	// default for commmands that are not recognized
	HELP,			// print help command list
	WHEREAMI,		// give description of suroundings or encounter
	HINT,			// give a hint for what to do next
	LOAD,			// load saved game
	ATTACK,			// attack somthing
	USE,			// use item or interactable
	INVENTORY,		// give inventory list
	MOVEON,			// move on to next encoutner
	SEARCH,			// search the area for interactibles and items
	SELECT,			// select a target, item, or interactable
	DROP,			// drop item
	EXIT			// Exit game
};

void Welcome();

void help();

void whereami();

void attack();

void Exit();
