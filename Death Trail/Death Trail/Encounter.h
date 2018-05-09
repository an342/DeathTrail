#include <map>
#include <string>
#include <vector>

#include "Entities.h"


using namespace std;

enum Location
{
	ROAD,
	DARK_ROAD,
	GASS_STATION,
	QUICKY_MART,
	SCHOOL,
	MALL

};

class Encounter
{
	
public:
	int enemies, lootcount;
	vector<Enemy> enemyList;
	Enemy opponent;
	vector<Item> itemList;
	Inventory inv;
	Location loc;

	Encounter()
	{
		enemies = 1;
		loc = ROAD;
		lootcount = 2;
			/*for (int i = 0; i < enemies; i++)
		{
		Zombie test;
		enemyList.push_back(test);
		}*/
	};

};

Encounter NewEncounter(float difficulty);

