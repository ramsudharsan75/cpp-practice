#include <iostream>

int main() {
    int num1{15};  // Decimal number
    int num2{017}; // Octal number
    int num3{0xF}; // Hexadecimal number
    int num4{0b1111}; // Binary number

    std::cout << "num1 : " << num1 << std::endl;
    std::cout << "num2 : " << num2 << std::endl;
    std::cout << "num3 : " << num3 << std::endl;
    std::cout << "num4 : " << num4 << std::endl;
    return 0;
}