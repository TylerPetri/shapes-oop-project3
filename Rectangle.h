#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle();
    Rectangle(int x, int y, std::string color, double width, double height);
    Rectangle(const Rectangle &other);
    Rectangle &operator=(const Rectangle &r);
    friend std::ostream &operator<<(std::ostream &outs,  Rectangle &r);
    double getRectangleArea();
    double getWidth();
    double getHeight();
    double getPerimeter();
    void setWidth(double width);
    void setHeight(double height);

private:
    void calculateRectangleArea();
    double _area;
    double _width;
    double _height;
};


#endif
