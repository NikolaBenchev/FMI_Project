//
// Created by nikola on 3/24/23.
//

#ifndef HELLOSFML_CELL_H
#define HELLOSFML_CELL_H


#include <iostream>
#include "Position.h"
#include "Unit.h"

enum{

};


class Cell {
private:
    Position pos;
    Unit unit;
    void copy(Cell *other){
        setPos(other->getPos());
        setUnit(other->getUnit());
    }
public:
    Cell(int x, int y){
        pos.x = x;
        pos.y = y;
    }

    Cell &operator=(Cell *other){
        copy(other);
        return *this;
    }

    void draw(){

    }

    const Position getPos(){
        return this->pos;
    }

    void setPos(Position value){
        this->pos = value;
    }

    const Unit getUnit(){
        return this->unit;
    }

    void setUnit(Unit value){
        this->unit = value;
    }
};


#endif //HELLOSFML_CELL_H
