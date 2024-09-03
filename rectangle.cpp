#include "rectangle.h"
#include <string>

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

void Rectangle::setLength(double l) {
    length = l;
}

void Rectangle::setWidth(double w) {
    width = w;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getArea() const {
    return length * width;
}

double Rectangle::getPerimeter() const {
    return 2 * (length + width);
}

std::string Rectangle::describe() const {
    return "I am a Rectangle with a length of " + std::to_string(length) + " and a width of " + std::to_string(width);
}
