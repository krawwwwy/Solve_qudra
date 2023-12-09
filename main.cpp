#include "quadratic_equation.h"
#include <iostream>

int main() {
    int a = 1, b = 1, c = 35;
    std::vector<double> result = solve(a, b, c);
    std::cout << "Roots: " << result[0] << " and " << result[1] << std::endl;
    return 0;
}
  
