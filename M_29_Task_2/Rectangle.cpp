#include "Rectangle.h"

BoundingBoxDimensions Rectangle::dimensions() const {

    BoundingBoxDimensions tmp;

    tmp.x = _width;

    tmp.y = _height;

    return tmp;
}
