#include <map>
#include <string>


//#include "Include.h"
//#include "Items.h"
//#include "Player.h"
//#include "Enemy.h"
#include "Encounter.h"

using namespace std;

map <Location, string> locDesc
{
	{ ROAD, "Road" },
	{ DARK_ROAD, "Dark Road" },
	{ GASS_STATION, "Gass Station" },
	{ QUICKY_MART, "Quicky Mart" },
	{ SCHOOL, "School" },
	{ MALL, "Mall" }
};


Encounter NewEncounter(float difficulty)
{
	Encounter test;
	return test;
}