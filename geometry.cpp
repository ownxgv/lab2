#include "geometry.hpp"
#include <cmath>

namespace geometry {

    double dot(const Point& a, const Point& b) {
        return a.x * b.x + a.y * b.y;
    }

    Point vector_subtract(const Point& a, const Point& b) {
        return {a.x - b.x, a.y - b.y};
    }

    double magnitude(const Point& a) {
        return sqrt(dot(a, a));
    }

    double distance_to_segment_squared(const Point& p, const Point& v, const Point& w) {
        Point vw = vector_subtract(w, v);
        Point vp = vector_subtract(p, v);
        double c1 = dot(vp, vw);
        if (c1 <= 0) return magnitude(vp);
        double c2 = dot(vw, vw);
        if (c2 <= c1) return magnitude(vector_subtract(p, w));
        double b = c1 / c2;
        Point pb = {v.x + b * vw.x, v.y + b * vw.y};
        return magnitude(vector_subtract(p, pb));
    }

    bool does_ray_intersect_circle(const Point& rayStart, const Point& rayThrough, const Circle& circle) {
        Point rayDirection = vector_subtract(rayThrough, rayStart);
        Point circleToRayStart = vector_subtract(rayStart, circle.center);
        double a = dot(rayDirection, rayDirection);
        double b = 2 * dot(circleToRayStart, rayDirection);
        double c = dot(circleToRayStart, circleToRayStart) - circle.radius * circle.radius;
        double discriminant = b * b - 4 * a * c;
        return discriminant >= 0;
    }
}
