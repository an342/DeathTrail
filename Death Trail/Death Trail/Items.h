#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

enum itemID
{
	EMPTY,
	MEDKIT,
	FOOD,
	SHOTGUNSHELLS,
	SHOTGUN,
	PISTOLAMMO,
	PISTOL
};





class Item
{
	int weight, quantity;
	string description;
	itemID ID;
public:
	void setWeight(int weightset) { weight = weightset; }
	int getWeight() { return weight; }
	itemID getID()
	{
		return ID;
	}
	int UseOne() 
	{
		if (quantity > 0)
		{
			quantity--;
			return quantity;
		}
		else
			return 0;
	}

};

class Weapon : public Item
{
	int maxAmmo, damage, ammo;
	string ammoType;
public:
	Weapon()
	{
		maxAmmo = 0;
		ammo = 0;
		damage = 7;
		ammoType = "Fist";
	}
	string GetType()
	{
		return ammoType;
	}
	int GetDamage()
	{
		return damage;
	}
};
 
class Inventory
{
	int size;
	vector <Item> items;
public:
	bool AddItem(Item item)
	{
		items.push_back(item);
	}
	bool RemoveItem(Item item)
	{
		for (int i = 0; i < items.size(); i++)
		{
			if (item.getID() == items[i].getID())
			{

			}

		}
	}
	void CheckInv() 
	{

	}

};

Item GenerateItem();
Inventory GenerateInv();