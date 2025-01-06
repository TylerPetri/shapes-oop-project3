#include "Triangle.h"
#include <cmath>

Triangle::Triangle() : _height(0), _area(0), _base(0), _hypotenuse(0) {}

Triangle::Triangle(int x, int y, std::string color, double base, double height) : Shape(x, y, color), _base(base), _height(height) {
    calculateTriangleArea();
    calculateHypotenuse();
}

Triangle::Triangle(const Triangle &other) : Shape(other), _area(other._area), _hypotenuse(other._hypotenuse), _height(other._height), _base(other._base) {};

void Triangle::calculateHypotenuse() {
    _hypotenuse = sqrt(pow(_base, 2) + pow(_height, 2));
}

void Triangle::calculateTriangleArea() {
    _area = (_base*_height)/2;
}

double Triangle::getTriangleArea() {
    return _area;
}

double Triangle::getBase() {
    return _base;
}

double Triangle::getHeight() {
    return _height;
}

double Triangle::getHypotenuse() {
    return _hypotenuse;
}

double Triangle::getPerimeter() {
    return _base+_height+_hypotenuse;
}

void Triangle::setBase(double base) {
    _base = base;
}

void Triangle::setHeight(double height) {
    _height = height;
}

Triangle &Triangle::operator=(const Triangle &t) {
    _base = t._base;
    _height = t._height;
    _hypotenuse = t._hypotenuse;
    _area = t._area;
    _color = t._color;
    _x = t._x;
    _y = t._y;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, Triangle &t) {
    t.calculateHypotenuse();
    t.calculateTriangleArea();
    outs << "Triangle info:" << std::endl;
    outs << "Color: " << t._color << std::endl;
    outs << "Area: " << t._area << std::endl;
    outs << "Base: " << t._base << std::endl;
    outs << "Height: " << t._height << std::endl;
    outs << "Side C length: " << t._hypotenuse << std::endl;
    outs << "Position: " << "X:" << t._x << ", Y:" << t._y << std::endl;
    return outs;
}


