#include "geometry.hpp"
#include "utils.hpp"

int main() {
    utils::print_program_info("Laboratory Work 3", "Author: Ilya Tokarev, K-13");
    geometry::Point rayStart, rayThrough;
    geometry::Circle circle;
    utils::get_ray_input(rayStart, rayThrough);
    utils::get_circle_input(circle);
    if (geometry::does_ray_intersect_circle(rayStart, rayThrough, circle)) {
        std::cout << "The ray intersects the circle.\n";
    } else {
        std::cout << "The ray does not intersect the circle.\n";
    }
    return 0;
}
