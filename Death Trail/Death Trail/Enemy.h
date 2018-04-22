#include <iostream>
#include <map>
#include <string>
#include <chrono>
#include <thread>
#include <fstream>
#include "items.h"


class Enemy
{
	int inventorysize, inventorymin, inventorymax, healthPoints;
	inventory inv;
	weapon equiped;

public:
	

};

class Zombie : public Enemy 
{
	int inventorymin = 1;
	int inventorymax = 5;
};