#include "Utilities.h"


namespace Util {
	int Rng(int min, int max) {
		std::random_device dev;
		std::default_random_engine dre{ dev() };
		std::uniform_int_distribution<int> dist{ min, max };
		return dist(dre);
	}

	std::string ReadLine(std::string message) {
		std::string input;
		std::cout << message;
		getline(std::cin, input);
		return input;
	}

}