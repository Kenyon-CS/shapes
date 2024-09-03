#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    virtual std::string describe() const = 0; // Pure virtual function to describe the shape
    virtual ~Shape() = default;
};

#endif // SHAPE_H
