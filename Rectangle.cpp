#include "Rectangle.h"

Rectangle::Rectangle() : _area(0), _width(0), _height(0) {};

Rectangle::Rectangle(int x, int y, std::string color, double width, double height) : Shape(x, y, color), _width(width), _height(height) {
    calculateRectangleArea();
}

Rectangle::Rectangle(const Rectangle &other) : Shape(other), _height(other._height), _width(other._width), _area(other._area) {};

void Rectangle::calculateRectangleArea() {
    _area = _width * _height;
}

double Rectangle::getRectangleArea() {
    return _area;
}

double Rectangle::getWidth() {
    return _width;
}

double Rectangle::getHeight() {
    return _height;
}

double Rectangle::getPerimeter() {
    return 2*(_width+_height);
}

void Rectangle::setWidth(double width) {
    _width = width;
}

void Rectangle::setHeight(double height) {
    _height = height;
}

Rectangle &Rectangle::operator=(const Rectangle &r) {
    _area = r._area;
    _width = r._width;
    _height = r._height;
    _color = r._color;
    _x = r._x;
    _y = r._y;
    return *this;
}

std::ostream &operator<<(std::ostream &outs,  Rectangle &r) {
    r.calculateRectangleArea();
    outs << "Rectangle info:" << std::endl;
    outs << "Color: " << r._color << std::endl;
    outs << "Area: " << r._area << std::endl;
    outs << "Base: " << r._width << std::endl;
    outs << "Height: " << r._height << std::endl;
    outs << "Perimeter: " << r.getPerimeter() << std::endl;
    outs << "Position: " << "X:" << r._x << ", Y:" << r._y << std::endl;
    return outs;
}


