#include <iostream>
#include "SDL2/SDL.h"

int main(int argc, char** argv)
{
	std::cout << "Hello cmake server";
	SDL_Init(SDL_INIT_EVERYTHING);

	return 0;
}