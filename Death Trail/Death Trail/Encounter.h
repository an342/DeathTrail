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

extern map <Location, string> locDesc;
 

class Encounter
{
	
public:
	int enemies, lootcount;
	vector<Enemy> enemyList;
	Zombie opponent;
	vector<Item> itemList;
	Inventory inv;
	Location loc;
	string desc;
	Encounter()
	{
		enemies = 1;
		loc = ROAD;
		desc = locDesc[loc];
		lootcount = 2;
		enemyList.push_back(opponent);
			/*for (int i = 0; i < enemies; i++)
		{
		Zombie test;
		enemyList.push_back(test);
		}*/
	};

	string GetDescription()
	{
		return desc;
	}
	int EnemyCount()
	{
		return enemies;
	}

};

Encounter NewEncounter(float difficulty);

