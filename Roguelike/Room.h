#pragma once
#include <iostream>
#include <map>
#include <vector>
#include "Unit.h"
#include "Enemy.h"

class Room
{
public:
	Room();
	~Room();
	std::map<std::string, Room*> neighbors; //hashmap
	std::vector<Unit>*  enemies; //arraylist

	void addEnemy(Enemy e);
	void removeEnemy(Enemy e);

	void addNeighbor(std::string s, Room* r);
	void removeNeighbor(std::string s);

};