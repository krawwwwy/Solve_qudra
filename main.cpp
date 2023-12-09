#include "quadratic_equation.h"
#include <iostream>

int main() {
    int a = 1, b = 4, c = -7;
    std::vector<std::string> result = solve(a, b, c);
    if (result.size() == 2) {
       std::cout << "Roots: " << result[0] << " and " << result[1] << std::endl;
    }
    else {
        std::cout << "Only one root: " << result[0] << std::endl;
    }
    return 0;
}
