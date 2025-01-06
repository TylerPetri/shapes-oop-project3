#include "Shape.h"

Shape::Shape() : _x(0), _y(0) {};

Shape::Shape(int x, int y, std::string color) : _x(x), _y(y), _color(color){}

Shape::Shape(const Shape &other) : _x(other._x), _y(other._y), _color(other._color) {}

int Shape::getX() {
    return _x;
}

int Shape::getY() {
    return _y;
}

void Shape::setX(int x) {
    _x = x;
}

void Shape::setY(int y) {
    _y = y;
};

