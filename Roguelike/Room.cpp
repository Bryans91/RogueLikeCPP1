#include "Room.h"


Room::Room()
{



}


Room::~Room()
{

}


void Room::addEnemy(Enemy* e) {
	enemies.push_back(e);
	//e->setCurrentRoom(this);
}


void Room::addAdjacentRoom(Direction d, Room* r) {
	if (d == null) {
		for (std::map<Direction, Room*>::iterator it = oldRooms.begin(); it != oldRooms.end(); ++it) {
			if (it->second == r) {
				adjacentRooms.insert(std::pair<Direction, Room*>(it->first, r));
			}
		}
	} else {
		adjacentRooms.insert(std::pair<Direction, Room*>(d, r));
	}
}

void Room::addCollapsedRoom(Room* r) {
	for (std::map<Direction, Room*>::iterator it = oldRooms.begin(); it != oldRooms.end(); ++it) {
		if (it->second == r) {
			collapsedRooms.insert(std::pair<Direction, Room*>(it->first, r));
		}
	}

}

void Room::clearRooms() {
	oldRooms = adjacentRooms;
	adjacentRooms.clear();
}
