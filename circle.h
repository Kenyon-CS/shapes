#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r = 0);
    void setRadius(double r);
    double getRadius() const;
    double getArea() const;
    double getCircumference() const;
    std::string describe() const override;
};

#endif // CIRCLE_H
