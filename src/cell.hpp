#pragma once
#include <cstdint>

class c_Cell
{
protected:
	uint16_t Type;
public:
	c_Cell();
	uint16_t GetType();
};

class c_Wall : public c_Cell
{
	uint8_t Health;
public:
	c_Wall(uint8_t HP);
};

class c_Fruit : public c_Cell
{
	uint8_t Calorie;
public:
	c_Fruit(uint8_t Calorie);
	uint8_t GetCal();
};
