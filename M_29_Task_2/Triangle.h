#pragma once

#include "IShape.h"

class Triangle : public IShape {

    double _a;

    double _b;

    double _c;

    double _p;

public:

    Triangle(double a, double b, double c) : _a(a), _b(b), _c(c) {

        assert(_a > 0 && _b > 0 && _c > 0);

        _p = (_a + _b + _c) / 2;
    }

    std::string type() const override { return "Triangle"; }

    double square() const override { return sqrt(_p * (_p - _a) * (_p - _b) * (_p - _c)); }

    BoundingBoxDimensions dimensions() const override; 
};

