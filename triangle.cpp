#include "triangle.h"
#include <string>

Triangle::Triangle(double b, double h) : base(b), height(h) {}

void Triangle::setBase(double b) {
    base = b;
}

void Triangle::setHeight(double h) {
    height = h;
}

double Triangle::getBase() const {
    return base;
}

double Triangle::getHeight() const {
    return height;
}

double Triangle::getArea() const {
    return 0.5 * base * height;
}

std::string Triangle::describe() const {
    return "I am a Triangle with a base of " + std::to_string(base) + " and a height of " + std::to_string(height);
}
