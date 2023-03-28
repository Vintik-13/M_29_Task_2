#pragma once

#include "IShape.h"

class Rectangle : public IShape {

    double _width;

    double _height;

public:

    Rectangle(double width, double height) : _width(width), _height(height) { assert(_width > 0 && _height > 0); }

    std::string type() const override { return "Rectangle"; }

    double square() const override { return _width * _height; }

    BoundingBoxDimensions dimensions() const override; 
};

