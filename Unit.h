//
// Created by nikola on 3/24/23.
//

#ifndef HELLOSFML_UNIT_H
#define HELLOSFML_UNIT_H


#include "Position.h"

class Unit {
private:
    Position pos;

public:
    Unit(int x, int y){
        setPos(Position(x, y));
    }

    Unit() {}

    Position getPos(){
        return this->pos;
    }

    void setPos(Position value){
        this->pos = value;
    }
};


#endif //HELLOSFML_UNIT_H
