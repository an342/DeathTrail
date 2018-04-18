#include <iostream>
#include <map>
#include <string>

using namespace std;

enum itemID
{
	EMPTY,
	MEDKIT,
	FOOD,
	SHOTGUNSHELLS,
	SHOTGUN,
	PISTOLAMMO,
	PISTOL,
};





class item
{
	int weight, quantity;
	string description;
public:
	void setWeight(int weightset) { weight = weightset; }
	int getWeight() { return weight; }

};

class weapon : public item
{
	int maxAmmo, damage;
	string ammoType;
};

class inventory
{
	int size;
	item items[256];

};