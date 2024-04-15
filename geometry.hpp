#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

namespace geometry {
    struct Point {
        double x, y;
    };

    struct Circle {
        Point center;
        double radius;
    };

    bool does_ray_intersect_circle(const Point& rayStart, const Point& rayThrough, const Circle& circle);
}

#endif
