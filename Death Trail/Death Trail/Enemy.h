#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <thread>
#include <fstream>
#include "items.h"


class Enemy
{
	int inventorysize, healthPoints;
	inventory inv;
	Weapon equiped;


};

class Zombie : public Enemy 
{

};