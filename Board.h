//
// Created by nikola on 3/24/23.
//

#ifndef HELLOSFML_BOARD_H
#define HELLOSFML_BOARD_H


#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>

class Board {
private:
    int rows, cols;
//    std::vector< std::vector<Cell> > cell;
    Cell *cell;
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
        for(int i = 0; i < rows; i++){
//            for(int j = 0; j < cols; j++){
//                cell[i][j] = new Cell();
//            }
            cell[i] = new Cell;
        }
    }

    Board(int rows, int cols){
        setRows(rows);
        setCols(cols);
        initCells();
    }

    void draw(){
        sf::RenderWindow window(sf::VideoMode(640, 480), "SFML Application");

        while (window.isOpen())
        {
            sf::Event event;

            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){
                    window.draw(cell[i][j]);
                }
            }

            window.clear();
            window.display();
        }

    }
};


#endif //HELLOSFML_BOARD_H
