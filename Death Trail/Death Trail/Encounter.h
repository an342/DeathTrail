#include <map>
#include <string>

#include "InputParser.h"
#include "Items.h"
#include "Player.h"
#include "Enemy.h"

using namespace std;

enum location
{
	ROAD,
	DARK_ROAD,
	GASS_STATION,
	QUICKY_MART,
	SCHOOL,

};

class encounter
{
	int enemies, lootcount;
	location loc;

};

encounter NewEncounter();

