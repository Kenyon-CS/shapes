#include <iostream>
#include "circle.h"
#include "triangle.h"
#include "rectangle.h"

int main() {
    Circle circle(5.0);
    Triangle triangle(3.0, 4.0);
    Rectangle rectangle(6.0, 2.0);

    std::cout << circle.describe() << std::endl;
    std::cout << "Area: " << circle.getArea() << std::endl;
    std::cout << "Circumference: " << circle.getCircumference() << std::endl;

    std::cout << triangle.describe() << std::endl;
    std::cout << "Area: " << triangle.getArea() << std::endl;

    std::cout << rectangle.describe() << std::endl;
    std::cout << "Area: " << rectangle.getArea() << std::endl;
    std::cout << "Perimeter: " << rectangle.getPerimeter() << std::endl;

    return 0;
}
