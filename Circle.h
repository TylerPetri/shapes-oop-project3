#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "Shape.h"

class Circle : public Shape {
public:
    Circle();
    Circle(int x, int y, std::string color, double radius);
    Circle(const Circle &other);
    Circle &operator=(const Circle &c);
    friend std::ostream &operator<<(std::ostream &outs, Circle &c);
    double getCircleArea();
    double getDiameter();
    double getRadius();
    double getCircumference();
    void setRadius(double radius);

private:
    void calculateCircleArea();
    double _area;
    double _radius;
    double _diameter;
};


#endif
