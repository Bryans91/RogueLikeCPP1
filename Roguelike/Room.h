#pragma once
#include <iostream>
#include <map>
#include <vector>
#include "Unit.h"
#include "Enemy.h"

enum Direction
{
	null, NORTH, EAST, SOUTH, WEST
};

class Room
{
public:
	Room();
	~Room();

	//rooms
	void addAdjacentRoom(Direction d, Room* r);
	void addCollapsedRoom(Room* r);
	void clearRooms();

	std::map<Direction, Room*> getAdjacentRooms() {
		return adjacentRooms;
	}
	std::map<Direction, Room*> getCollapsedRooms() {
		return collapsedRooms;
	}



	//inside rooms
	void addEnemy(Enemy* e);


private:
	//vars
	bool visited = false;

	//rooms
	std::map<Direction, Room*> adjacentRooms;
	std::map<Direction, Room*> collapsedRooms;
	std::map<Direction, Room*> oldRooms;

	//inside rooms
	std::vector<Unit*>  enemies; //arraylist

	

};