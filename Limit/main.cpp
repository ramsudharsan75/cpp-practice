#include <iostream>
#include <limits>

int main() {
    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to "
              << std::numeric_limits<short>::max() << std::endl;

    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to "
              << std::numeric_limits<int>::max() << std::endl;

    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to "
              << std::numeric_limits<long>::max() << std::endl;

    std::cout << "The range for long long is from " << std::numeric_limits<long long>::min() << " to "
              << std::numeric_limits<long long>::max() << std::endl;

    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to "
              << std::numeric_limits<float>::max() << std::endl;

    std::cout << "The range for double is from " << std::numeric_limits<double>::min() << " to "
              << std::numeric_limits<double>::max() << std::endl;

    std::cout << "The range for long double is from " << std::numeric_limits<long double>::min() << " to "
              << std::numeric_limits<long double>::max() << std::endl;

    return 0;
}