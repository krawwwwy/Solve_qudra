#include "quadratic_equation.h"
#include <cmath>
#include <limits> 

std::vector<double> solve(int a, int b, int c) {
    std::vector<double> roots;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        roots.push_back(std::numeric_limits<double>::quiet_NaN());
        roots.push_back(std::numeric_limits<double>::quiet_NaN());
    }
    else {
        double sqrtD = sqrt(discriminant);

        roots.push_back((-b + sqrtD) / (2 * a));
        roots.push_back((-b - sqrtD) / (2 * a));
    }
    return roots;
}
