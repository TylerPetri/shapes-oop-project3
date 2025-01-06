#include <iostream>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

    Shape shape1(5, 10, "blue");
    Triangle triangle1(100, 200, "yellow", 2.5, 3.9);
    Circle circle1(400, 345, "black", 3.3);
    Rectangle rectangle1(783, 999, "green", 4, 8);

    Shape shape2 = shape1;
    Triangle triangle2 = triangle1;
    Circle circle2 = circle1;
    Rectangle rectangle2 = rectangle1;

    std::cout << "SHAPE2 COORDS: " << shape2.getX() << ", ";
    std::cout << shape2.getY() << "\n" << std::endl;

    std::cout << triangle2 << std::endl;
    std::cout << circle2 << std::endl;
    std::cout << rectangle2 << std::endl;

    triangle1.setBase(4);
    circle1.setRadius(4.4);
    rectangle1.setWidth(20);

    triangle2 = triangle1;
    circle2 = circle1;
    rectangle2 = rectangle1;

    std::cout << triangle2 << std::endl;
    std::cout << circle2 << std::endl;
    std::cout << rectangle2 << std::endl;


    return 0;
}
