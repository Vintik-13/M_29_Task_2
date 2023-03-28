#pragma once

#include <iostream>
#include "IShape.h"

void printParams(IShape* share) {

    std::cout << "Type: " << share->type() << std::endl;

    std::cout << "Square: " << share->square() << std::endl;

    std::cout << "Width: " << share->dimensions().x << std::endl;

    std::cout << "Height: " << share->dimensions().y << std::endl;
}
