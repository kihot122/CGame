#include <iostream>
#include "SDL2/SDL.h"
#include "cell.hpp"
#include "enum.hpp"

int main(int argc, char** argv)
{
	std::cout << "Hello cmake ";
	SDL_Init(SDL_INIT_EVERYTHING);

	c_Wall* W = new c_Wall(20);
	std::cout << W->GetType();

	return 0;
}