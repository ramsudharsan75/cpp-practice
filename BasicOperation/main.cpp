#include <iostream>

int main() {
    int num1{1};
    int num2{2};

    // Addition
    int result{num1 + num2};

    std::cout << "Addtion: " << result << std::endl;

    // Subtraction
    result = num1 - num2;
    std::cout << "Subtraction: " << result << std::endl;

    // Multiplication
    result = num1 * num2;
    std::cout << "Multiplication: " << result << std::endl;

    // Division
    result = num1 / num2;
    std::cout << "Division: " << result << std::endl;

    // Modulus
    result = num1 % num2;
    std::cout << "Modulus: " << result << std::endl;

    // prefix operation
    result = ++num1;
    std::cout << "Prefix increment: " << result << std::endl;
    result = --num1;
    std::cout << "Prefix decrement: " << result << std::endl;
    std::cout << "num1: " << --num1 << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    
    // postfix operation
    result = num1++;
    std::cout << "Postfix increment: " << result << std::endl;
    result = num1--;
    std::cout << "Postfix decrement: " << result << std::endl;
    std::cout << "num1: " << num1++ << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    
    return 0;
}
