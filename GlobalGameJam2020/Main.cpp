#include <iostream>
#include "Level.h""

int main(int argc, char* argv[]) {

	if (false) {
		std::cout << "Error! Cannot initialize program." << std::endl;
		return 1;
	}


	std::array<int, MAPSIZE> test_map =
	{
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		1, 1, 0, 0, 0, 0, 0, 0, 1, 1,
		1, 1, 0, 0, 0, 0, 0, 0, 1, 1,
		1, 1, 1, 1, 0, 0, 1, 0, 1, 1,
		1, 1, 1, 1, 0, 0, 1, 0, 1, 1,
		1, 1, 1, 1, 1, 0, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1
	};

	std::array<int, NUMBEROFBLOCKSINLEVEL> test = { 1,2,5,4,2 };

	Level test_level(test_map, test, 10, 10);

	return 0;
}