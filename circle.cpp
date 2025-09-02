#include "circle.h"
#include <cmath>
#include <string>

Circle::Circle(double r) : radius(r) {}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

double Circle::getCircumference() const {
    return 2 * M_PI * radius;
}

std::string Circle::describe() const {
    return "I am a Circle with a radius of " + std::to_string(radius);
}
