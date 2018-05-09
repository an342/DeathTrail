#include <string>


#include "items.h"



class Player
{
	int inventorysize, healthPoints;
	Inventory inv;
	Weapon equiped;
	Item selected;

};

class Enemy
{
	int invSize, invMin, invMax, HP;
	Inventory inv;
	Weapon equiped;

public:
	void SetInvSize(int i) { invSize = i; }

	

};
 
class Zombie : public Enemy 
{
	int inventorymin = 1;
	int inventorymax = 5;
};

Enemy NewEnemy();