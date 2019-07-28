#include <iostream>
#include <ctime>
#include "SDL2/SDL.h"
#include "cell.hpp"
#include "snake.hpp"
#include "map.hpp"
#include "enum.hpp"

const int Width = 800;
const int Height = 800;

int main(int argc, char** argv)
{
	c_Map map(Width, Height);

	int fruit_ctr;

	while (true)
	{
		srand(time(NULL));
		fruit_ctr = 0;

		for (uint16_t i = 0; i < map.GetSize()[0]; i++)
		{
			for (uint16_t j = 0; j < map.GetSize()[1]; j++)
			{
				switch (map.GetCell(i, j)->GetType())
				{
				case CELL_EMPTY:

					break;
				case CELL_FRUIT:

					if (fruit_ctr < 2)
					{

					}

					fruit_ctr++;
					break;
				case CELL_WALL:

					break;
				case CELL_SNAKE_HEAD:

					break;
				case CELL_SNAKE_TAIL:

					break;
				default:
					std::cout << "no cell matching\n";
					break;
				}
			}
		}
	}

	return 0;
}