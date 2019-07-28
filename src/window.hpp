#pragma once
#include <cstdint>
#include "SDL2/SDL.h"
#include "map.hpp"

class c_Window
{
	SDL_Event Event;
	SDL_Renderer* Renderer;
	SDL_Window* Window;

	uint16_t Width, Height;
	c_Map* Map;
	int CornerX, CornerY;

public:
	c_Window(uint16_t Width, uint16_t Height, c_Map *Map, int CornerX = 0, int CornerY = 0);
	void Draw();
	uint16_t Events();
};
