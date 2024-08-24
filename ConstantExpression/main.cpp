#include <iostream>

constinit int num{5}; // constinit can only be used outside the main function
const constinit int num2{5};

int main() {
    constexpr int SOME_LIB_VERSION{1};
    static_assert(SOME_LIB_VERSION == 1, "Some lib version is not 1");

    constexpr double PI{3.14159};
    std::cout << "Some lib version : " << SOME_LIB_VERSION << std::endl;

    int x{5};
    // constexpr iny y{x}; // wont work since constexpr is evaluated at compile time and x is not a constant expression
    // static_assert(x == 5, "x is not 5"); // wont work since x is not a constant expression
    const int z{10};
    static_assert(z == 10, "z is not 10"); // works since z is a constant

    constexpr int y{z}; // works since z is a constant expression

    num = 10; // constinit is not const until we specify it as const
    std::cout << "num : " << num << std::endl;

    // num2 = 10; // can't modify since it is const constinit

    return 0;
}