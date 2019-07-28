#include "window.hpp"
#include "enum.hpp"

c_Window::c_Window(uint16_t Width, uint16_t Height, c_Map *Map, int CornerX, int CornerY) : Width(Width), Height(Height), Map(Map), CornerX(CornerX), CornerY(CornerY)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	Window = SDL_CreateWindow("Okienko :)", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, Width, Height, SDL_WINDOW_SHOWN);
	Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
}

void c_Window::Draw()
{
	SDL_SetRenderDrawColor(Renderer, 255, 255, 255, 255);
	SDL_RenderClear(Renderer);
	int CurrentX = 0, CurrentY = 0;

	for(int x=CornerX; x<Map->GetSize()[0] and CurrentX < Width; x++, CurrentX += 64)
		for (int y = CornerY; y < Map->GetSize()[1] and CurrentY < Height; y++, CurrentY += 64)
		{
			switch (Map->GetCell(x, y)->GetType())
			{
			case CELL_EMPTY:
				SDL_SetRenderDrawColor(Renderer, 255, 255, 255, 255);
			case CELL_WALL:
				SDL_SetRenderDrawColor(Renderer, 127, 127, 127, 255);
			case CELL_FRUIT:
				SDL_SetRenderDrawColor(Renderer, 255, 0, 0, 255);
			case CELL_SNAKE_HEAD:
				SDL_SetRenderDrawColor(Renderer, 255, 255, 0, 255);
			case CELL_SNAKE_TAIL:
				SDL_SetRenderDrawColor(Renderer, 0, 255, 0, 255);
			}

			SDL_Rect Rect;
			Rect.h = 64;
			Rect.w = 64;
			Rect.x = CurrentX;
			Rect.y = CurrentY;
			SDL_RenderFillRect(Renderer, &Rect);
			SDL_RenderDrawRect(Renderer, &Rect);	
		}
	SDL_RenderPresent(Rend);
}

uint16_t c_Window::Events()
{
	while (SDL_PushEvent(&Event));
	return 0;
}
