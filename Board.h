//
// Created by nikola on 3/24/23.
//

#ifndef HELLOSFML_BOARD_H
#define HELLOSFML_BOARD_H

#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>

extern const int CELL_WIDTH, CELL_HEIGHT;

class Board {
private:
    int rows, cols;
    Cell *cell[];
public:
    int getRows(){
        return this->rows;
    }

    void setRows(int value){
        this->rows = value;
    }

    int getCols(){
        return this->cols;
    }

    void setCols(int value){
        this->cols = value;
    }

    void initCells(){
        for(int i = 0; i < this->getRows(); i++){
            cell[i] = new Cell[cols];
            for(int j = 0; j < this->getCols(); j++){
                cell[i][j] = Cell(j, i);
            }
        }
    }

    Board(int rows, int cols){
        setRows(rows);
        setCols(cols);
        initCells();
    }

    void draw(){
        std::cout << "draw" << std::endl;
        sf::RenderWindow window(sf::VideoMode(rows * CELL_WIDTH, cols * CELL_HEIGHT), "SFML Application");

        while (window.isOpen())
        {
            sf::Event event;

            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    cell[i][j].draw(&window);
                }
            }
            window.display();
        }

    }
};


#endif //HELLOSFML_BOARD_H
