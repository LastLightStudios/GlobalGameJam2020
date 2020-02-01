#pragma once
#include <array>
#include <tuple>

/*
setting up constants for the map size
*/

const int MAPSIZE = 100;
const int NUMBEROFBLOCKSINLEVEL = 5;

class Level
{
private:
	int level_height, level_width;
	std::array<int, MAPSIZE> background_map;
	std::array<int, NUMBEROFBLOCKSINLEVEL> list_blocks;
public:
	// Constructor
	Level(std::array<int, MAPSIZE> map, std::array<int, NUMBEROFBLOCKSINLEVEL> blocks, int height, int width);

	// Getter for the map
	std::array<int, MAPSIZE> GetMap();

	// Getter for the blocks
	std::array<int, NUMBEROFBLOCKSINLEVEL> GetBlocks();

	//helper method to convert from coord to index
	int CoordToIndex(int x, int y);

    //helper method to convert from index to coord
	std::tuple<int, int> IndexToCoord(int a);
};
