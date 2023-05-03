#pragma once
#include <SFML/Graphics.hpp>

class Cell
{
private:
    sf::Color color;

public:
    Cell();
    Cell(sf::Color);
    sf::Color getColor();
};