#include "Circle.h"
#include <cmath>

Circle::Circle() : _area(0), _diameter(0), _radius(0) {};

Circle::Circle(int x, int y, std::string color, double radius) : Shape(x, y, color),_radius(radius) {
    _diameter = 2*_radius;
    calculateCircleArea();
};

Circle::Circle(const Circle &other) : Shape(other),  _area(other._area), _diameter(other._diameter), _radius(other._radius){};

double Circle::getCircleArea() {
    return _area;
}

void Circle::calculateCircleArea() {
    _area = M_PI * pow(_radius, 2);
}

double Circle::getDiameter() {
    return _diameter;
}

double Circle::getRadius() {
    return _radius;
}

double Circle::getCircumference() {
    return 2*M_PI*_radius;
}

void Circle::setRadius(double radius) {
    _radius = radius;
}

Circle &Circle::operator=(const Circle &c) {
    _area = c._area;
    _radius = c._radius;
    _diameter = c._diameter;
    _color = c._color;
    _x = c._x;
    _y = c._y;
    return *this;
}

std::ostream &operator<<(std::ostream &outs, Circle &c) {
    c.calculateCircleArea();
    outs << "Circle info:" << std::endl;
    outs << "Color: " << c._color << std::endl;
    outs << "Area: " << c._area << std::endl;
    outs << "Diameter: " << c._diameter << std::endl;
    outs << "Radius: " << c._radius << std::endl;
    outs << "Circumference: " << c.getCircumference() << std::endl;
    outs << "Position: " << "X:" << c._x << ", Y:" << c._y << std::endl;
    return outs;
}




