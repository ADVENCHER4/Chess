#pragma once
#include <SFML/Graphics.hpp>
#include "Cell.h"

class Board
{
private:
    Cell** board;

public:
    Board();
    Cell** getBoard();
};