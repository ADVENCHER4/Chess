#include <iostream>
#include "Board.h"
#include "Cell.h"
#include "Constants.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE, WINDOW_SIZE), "Chess");
    sf::RectangleShape br[8][8];
    Board b;
    Cell** c = b.getBoard();
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			br[i][j].setPosition(j * CELL_SIZE + WINDOW_SIZE / 8, i * CELL_SIZE + WINDOW_SIZE / 8);
			br[i][j].setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
			if ((i + j) % 2 != 0)
			{
				br[i][j].setFillColor(c[i][j].getColor());
			}
			else
			{
				br[i][j].setFillColor(c[i][j].getColor());
			}
		}
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(BACKGROUND);
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				window.draw(br[i][j]);
			}
		}
		window.display();
	}
	return 0;
}
