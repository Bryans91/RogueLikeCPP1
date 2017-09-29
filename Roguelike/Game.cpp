#include <iostream>

#include "Game.h"
#include "Utilities.h"

Game::Game()
{
}

int Game::StartGame()
{
	std::cout << "HELLO" << Util::Rng(1, 10) << std::endl;

	std::string input = Util::ReadLine("Wat is 1 + 1 ");

	std::cout << input;


	return 0;
}


Game::~Game()
{
}
