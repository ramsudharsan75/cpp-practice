#include <iostream>

int main() {
    double d{5.5};
    int i{1};
    auto res{i * d};

    std::cout << sizeof(res) << std::endl;

    int x{4};
    double y{8.5};
    int z;
    x = y; // Implicit conversion from double to int -> narrowing conversion (bad)
    z = y;

    std::cout << sizeof(x) << std::endl;
    std::cout << sizeof(z) << std::endl;

    int sum{static_cast<int>(y) + x};
    std::cout << sum << std::endl;
    return 0;
}