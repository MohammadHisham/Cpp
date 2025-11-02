#include <iostream>
#include "math_lib.hpp"

int main() {
    float x = 5;
    float y = 0;
    std::cout << "Testing mathlib...\n";
    std::cout << "Sum: " << math_lib::add(x, x) << "\n";
    std::cout << "Division: " << math_lib::divide(x, y) << "\n";  // will cause a bug
    return 0;
}
 