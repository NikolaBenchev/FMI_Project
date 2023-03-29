#include <iostream>
#include "Board.h"
#include "Tribe.h"

//const int CELL_WIDTH = 50, CELL_HEIGHT = 50;

const int CELL_WIDTH = 50,
    CELL_HEIGHT = 50;

const std::map<Tribe, sf::Color> TribeColor = {
    {BARBARIANS, sf::Color::Red},
    {KNIGHTS, sf::Color::Blue},
    {VIKINGS, sf::Color::Green}
};

int main() {
    Board board = Board(10, 10);

    board.draw();
    return 0;
}
