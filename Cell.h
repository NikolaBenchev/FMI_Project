//
// Created by nikola on 3/24/23.
//

#ifndef HELLOSFML_CELL_H
#define HELLOSFML_CELL_H


#include <iostream>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <map>
#include "Position.h"
#include "Unit.h"
#include "Tribe.h"

extern const int CELL_WIDTH, CELL_HEIGHT;
extern const std::map<Tribe, sf::Color> TribeColor;

class Cell {
private:
    Position pos;
    Unit unit;
    sf::RectangleShape shape;
    void copy(Cell *other){
        setPos(other->getPos());
        setUnit(other->getUnit());
    }
public:
    Cell(int x, int y){
        setPos(Position(x, y));
    Tribe EnumOfIndex(int i){return static_cast<Tribe>(i);};
//    TribeColor.find(0);
    }

    Cell(){}

    Cell &operator=(Cell *other){
        copy(other);
        return *this;
    }

    void draw(sf::RenderWindow *window){
        shape.setSize(sf::Vector2f(CELL_WIDTH, CELL_HEIGHT));
        shape.setPosition(pos.x * CELL_WIDTH, pos.y * CELL_HEIGHT);
        shape.setOutlineColor(sf::Color::Black);
        shape.setOutlineThickness(2);
        window->draw(shape);
    }

    Position getPos(){
        return this->pos;
    }

    void setPos(Position value){
        this->pos = value;
    }

    Unit getUnit(){
        return this->unit;
    }

    void setUnit(Unit value){
        this->unit = value;
    }
};


#endif //HELLOSFML_CELL_H
