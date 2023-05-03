#include <SFML/Graphics.hpp>
#include "Cell.h"

Cell::Cell() = default;

Cell::Cell(sf::Color c) : color(c) {}

sf::Color Cell::getColor()
{
    return color;
}