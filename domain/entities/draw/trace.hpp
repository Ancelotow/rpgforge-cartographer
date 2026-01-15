//
// Created by Owen ANCELOT on 16/01/2026.
//

#ifndef CARTOGRAPHER_TRACE_HPP
#define CARTOGRAPHER_TRACE_HPP
#include <vector>

#include "color.hpp"
#include "point.hpp"

struct Trace {
    std::vector<Point> points;
    Color color;
};

#endif //CARTOGRAPHER_TRACE_HPP