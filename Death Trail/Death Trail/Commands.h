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
	HINT,			// give a hint for what to do next
	WHEREAMI,		// give description of suroundings or encounter
	PLAY,			// start a game
	LOAD,			// load saved game
	ATTACK,			// attack somthing
	TARGET,			// select a target
	USE,			// use item or interactable
	INVENTORY,		// give inventory list
	MOVEON,			// move on to next encoutner
	SEARCH,			// search the area for interactibles and items
	SELECT,			// select a target, item, or interactable
	DROP,			// drop item
	DEBUG,			// toggle debug mode
	EXIT			// Exit game
};

void Welcome();
void help();
void whereami();
void Exit();
void Play();
void Debug();
void MoveOn();
void Search();
void Attack();
void Target();


int DIFPars(vector <string> coms);

bool is_number(const std::string& s);
