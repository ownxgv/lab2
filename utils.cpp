#include "utils.hpp"

namespace utils {
    void print_program_info(const std::string& task, const std::string& author_info) {
        std::cout << author_info << std::endl;
        std::cout << "Task: " << task << std::endl;
    }

    void get_ray_input(geometry::Point& rayStart, geometry::Point& rayThrough) {
        std::cout << "Enter the starting point of the ray (x y): ";
        std::cin >> rayStart.x >> rayStart.y;
        std::cout << "Enter the point through which the ray passes (x y): ";
        std::cin >> rayThrough.x >> rayThrough.y;
    }

    void get_circle_input(geometry::Circle& circle) {
        std::cout << "Enter the center of the circle (x y): ";
        std::cin >> circle.center.x >> circle.center.y;
        std::cout << "Enter the radius of the circle: ";
        std::cin >> circle.radius;
        while (circle.radius < 0) {
            std::cout << "The radius of the circle cannot be negative. Please try again.\n";
            std::cin >> circle.radius;
        }
    }
}
