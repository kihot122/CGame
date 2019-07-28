#pragma once
#include <cstdint>
#include "cell.hpp"

class c_Map
{
	c_Cell*** Matrix;
	uint16_t Size[2];
public:
	c_Map(uint16_t Width, uint16_t Height);
	uint16_t* GetSize();
	c_Cell* GetCell(uint16_t X, uint16_t Y);
	void SetCell(uint16_t X, uint16_t Y, c_Cell *Cell);
};