#include "cell.hpp"
#include "enum.hpp"

c_Cell::c_Cell() { Type = CELL_EMPTY; }
c_Wall::c_Wall(uint8_t HP) : Health(HP) { Type = CELL_WALL; }
c_Fruit::c_Fruit(uint8_t Calorie) : Calorie(Calorie) { Type = CELL_FRUIT; }
c_SnakeHead::c_SnakeHead() { Type = CELL_SNAKE_HEAD; }
c_SnakeTail::c_SnakeTail() { Type = CELL_SNAKE_TAIL; }

uint16_t c_Cell::GetType() { return Type; }
uint8_t c_Fruit::GetCal() { return Calorie; }

