#ifndef UTILS_HPP
#define UTILS_HPP

#include "geometry.hpp"
#include <iostream>

namespace utils {
    void print_program_info(const std::string& task, const std::string& author_info);
    void get_ray_input(geometry::Point& rayStart, geometry::Point& rayThrough);
    void get_circle_input(geometry::Circle& circle);
}

#endif
