#include <string>


#include "items.h"


class Enemy
{
protected:
	int invSize, invMin, invMax, HP;
	string name;
	Inventory inv;
	Weapon equiped;
	bool alive;

public:
	void SetInvSize(int i) { invSize = i; }
	string GetName()
	{
		return name;
	}
	int GetHP()
	{
		return HP;
	}
	void Damage(int damage)
	{
		HP -= damage;
		if (HP < 0)
		{
			alive = false;
		}
	}
	int attack()
	{
		return equiped.GetDamage();
	}
	

};
 
class Zombie : public Enemy 
{
	int invMin = 1;
	int invMax = 5;
public:
	Zombie()
	{
		alive = true;
		invSize = 3;
		HP = 13;
		name = "Zombie";

	}
};

class Player
{
	int inventorysize, healthPoints;
	Inventory inv;
	Weapon equiped;
	Item selected;
	Enemy target;
public:
	Player()
	{
		inventorysize = 20;
		healthPoints = 100;
		target;
	}

	int attack()
	{
		return equiped.GetDamage();
	}

	int damage( int damage)
	{
		healthPoints -= damage;
		if (healthPoints <= 0)
			healthPoints = 0;

		return healthPoints;
	}

};
Enemy NewEnemy();