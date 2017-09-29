#include "Room.h"


Room::Room()
{

	enemies = new std::vector<Unit>;


}


Room::~Room()
{
	delete enemies;

}


void Room::addEnemy(Enemy e) {
	enemies->push_back(e);
}

void Room::removeEnemy(Enemy e) {

}

void Room::addNeighbor(std::string s, Room* r) {
	if (neighbors[s] == NULL) {
		neighbors[s] = r;
	}
}

void Room::removeNeighbor(std::string) {

}