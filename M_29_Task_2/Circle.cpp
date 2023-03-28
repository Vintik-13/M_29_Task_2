#include "Circle.h"

BoundingBoxDimensions Circle::dimensions() const {

    BoundingBoxDimensions tmp;

    tmp.x = _radius * 2;

    tmp.y = tmp.x;

    return tmp;
}
