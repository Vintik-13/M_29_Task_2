#include "Triangle.h"

BoundingBoxDimensions Triangle::dimensions() const {

    BoundingBoxDimensions tmp;

    tmp.x = _a;

    tmp.y = (sqrt(_p * (_p - _a) * (_p - _b) * (_p - _c))) * 0.5 * _a;

    return tmp;
}
