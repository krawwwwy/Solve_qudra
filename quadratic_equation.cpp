#include "quadratic_equation.h"
#include <cmath>
#include <limits> 
#
std::vector<std::string> solve(double a, double b, double c) {
    std::vector<std::string> roots;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        roots.push_back("Complex answer");
        roots.push_back("Complex answer");
    }
    else {
        double sqrtD = sqrt(discriminant);
        roots.push_back(std::to_string((-b - sqrtD) / (2 * a)));
        if (discriminant != 0) {
            roots.push_back(std::to_string((-b + sqrtD) / (2 * a)));
        }
    }
    return roots;
}
