#pragma once

#include <string>
#include <cmath>
#include <cassert>

const double PI{ 3.14 };

struct BoundingBoxDimensions
{
    double x{ 0 };

    double y{ 0 };
};

class IShape {
public:

    virtual std::string type() const = 0;

    virtual double square() const = 0;

    virtual BoundingBoxDimensions dimensions() const = 0;
};

