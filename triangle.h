#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b = 0, double h = 0);
    void setBase(double b);
    void setHeight(double h);
    double getBase() const;
    double getHeight() const;
    double getArea() const;
    std::string describe() const override;
};

#endif // TRIANGLE_H
