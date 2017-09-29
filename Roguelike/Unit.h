#pragma once
#include <string>
class Unit
{
public:
	int* health;
	int* level;
	int* defence;
	int* offence;
	std::string* name;


	Unit();
	~Unit();
};
