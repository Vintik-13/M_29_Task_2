#pragma once

#include "IShape.h"

class Circle : public IShape {

    double _radius;

public:

    Circle(double radius) : _radius(radius) { assert(_radius > 0); }

    std::string type() const override { return "Circle"; }

    double square() const override { return PI * std::pow(_radius, 2); }

    BoundingBoxDimensions dimensions() const override; 
};

