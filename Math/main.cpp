#include <cmath>
#include <iostream>

int main1() {
    double weight{7.5};

    // floor
    std::cout << "floor(" << weight << ") = " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "ceil(" << weight << ") = " << std::ceil(weight) << std::endl;

    // abs
    std::cout << "abs(" << weight << ") = " << std::abs(weight) << std::endl;
    std::cout << "abs(" << -5 << ") = " << std::abs(-5) << std::endl;

    // sqrt
    std::cout << "sqrt(" << weight << ") = " << std::sqrt(weight) << std::endl;

    // exp
    std::cout << "exp(" << 10 << ") = " << std::exp(10) << std::endl;

    // log
    std::cout << "log(" << 100 << ") = " << std::log(100) << std::endl;

    // log10
    std::cout << "log10(" << 100 << ") = " << std::log10(100) << std::endl;

    // pow
    std::cout << "pow(" << weight << ", 2) = " << std::pow(weight, 2) << std::endl;

    // round
    std::cout << "round(" << 2.5 << ") = " << std::round(2.5) << std::endl;
    std::cout << "round(" << 7.5 << ") = " << std::round(7.5) << std::endl;
    std::cout << "round(" << 2.25 << ") = " << std::round(2.25) << std::endl;
    std::cout << "round(" << 2.75 << ") = " << std::round(2.75) << std::endl;

    short int a{1};
    short int b{2};
    auto res{a + b}; // auto type conversion to int instead of short int as short (2 byte) doesn't allow arithmetic
                     // operation and similar thing will happen with char data type
    std::cout << sizeof(res) << std::endl;

    return 0;
}