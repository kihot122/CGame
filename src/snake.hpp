#pragma once

#include "enum.hpp"
#include "cell.hpp"
#include <deque>
#include "map.hpp"

struct position{
    uint16_t X,Y;
};

class c_Snake
{
private:

    bool alive = true;
    uint16_t obecny_kierunek;
    uint16_t player_color;
    std::deque<position> tail;
    c_Map *playground;
    
    void MoveHead(position next_Cell);
    void MoveBack();

public:

    c_Snake(uint16_t color, uint16_t start_x, uint16_t start_y, uint16_t startowy_kierunek, c_Map *mapa, uint16_t start_dlugosc);
    ~c_Snake();

    void Move(uint16_t kierunek);
    void Move();
    bool IsAlive();
};