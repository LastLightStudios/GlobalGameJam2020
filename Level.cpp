#include "Level.h"


// Constructor
Level::Level(std::array<int, MAPSIZE> map, std::array<int, NUMBEROFBLOCKSINLEVEL> blocks, int height, int width)
{
	level_height = height;
	level_width = width;
	background_map = map;
	list_blocks = blocks;
}

std::array<int, MAPSIZE> Level::GetMap()
{
	return std::array<int, MAPSIZE>(background_map);
}

std::array<int, NUMBEROFBLOCKSINLEVEL> Level::GetBlocks()
{
	return std::array<int, NUMBEROFBLOCKSINLEVEL>(list_blocks);
}

//helper method to convert from coord to index
int Level::CoordToIndex(int x, int y)
{
	// adds the x value to y times the width
	/*
	8 9 10 11
	4 5 6 7
	0 1 2 3 
	*/
	/*
	0+(4x2) 1+(4x2) 2+(4x2) 3+(4x2)
	0+(4x1) 1+(4x1) 2+(4x1) 3+(4x1)
	0+(4x0) 1+(4x0) 2+(4x0) 3+(4x0) 
	*/
	return x + (y*level_width);
}

//helper method to convert from index to coord
std::tuple<int, int> Level::IndexToCoord(int a)
{
	// the x value will be the remainder of the index divided by the width
	// the y value will be the floor of the index divided by the width
	return std::make_tuple<int, int>(a % level_width, floor(a/level_width));
}


