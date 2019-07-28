#include "map.hpp"

c_Map::c_Map(uint16_t Width, uint16_t Height) : Size{ Width, Height }
{
	Matrix = new c_Cell * *[Width];
	for (int i = 0; i < Width; i++)
		Matrix[i] = new c_Cell * [Height];
}

uint16_t* c_Map::GetSize() { return Size; }

c_Cell* c_Map::GetCell(uint16_t X, uint16_t Y) { return Matrix[X][Y]; }

void c_Map::SetCell(uint16_t X, uint16_t Y, c_Cell *Cell)
{
	delete Matrix[X][Y];
	Matrix[X][Y] = Cell;
}