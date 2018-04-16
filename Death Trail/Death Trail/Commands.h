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
	UNRECOGNIZED,
	HELP,
	WHEREAMI,
	HINT
};

extern void Welcome();

extern void help();

extern void whereami();

extern void attack();
