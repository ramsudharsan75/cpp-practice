#include <iomanip>
#include <iostream>

int main() {
    // std::setw()
    int col_width{30};
    std::cout << std::setw(col_width) << "Hello" << std::setw(col_width) << "World" << std::endl;
    std::cout << std::setw(col_width) << "Ramsudharsan" << std::setw(col_width) << "Manoharan" << std::endl;
    std::cout << std::endl;

    // std::left
    std::cout << std::left;
    std::cout << std::setw(col_width) << "Hello" << std::setw(col_width) << "World" << std::endl;
    std::cout << std::setw(col_width) << "Ramsudharsan" << std::setw(col_width) << "Manoharan" << std::endl;
    std::cout << std::endl;

    // std::internal
    std::cout << "Internal Justified Below:" << std::endl;
    std::cout << std::internal; // sign is left justified, number is right justified
    std::cout << std::setw(col_width) << -1 << std::endl;
    // Disable std::internal
    std::cout << std::resetiosflags(std::ios::internal);
    std::cout << std::endl;

    // std::setfill()
    std::cout << std::setfill('*');
    std::cout << std::setw(col_width) << "Filled" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::endl;

    // std::showpos
    std::cout << std::showpos;
    std::cout << std::setw(col_width) << 10 << std::endl;
    std::cout << std::endl;

    // std::dec decimal
    std::cout << std::dec;
    std::cout << 15641 << std::endl;
    // std::hex hexadecimal
    std::cout << std::hex;
    std::cout << 15641 << std::endl;
    // std::oct octal
    std::cout << std::oct;
    std::cout << 15641 << std::endl;
    std::cout << std::endl;

    // std::dec decimal
    std::cout << std::dec;
    std::cout << -15641 << std::endl;
    // std::hex hexadecimal
    std::cout << std::hex;
    std::cout << -15641 << std::endl;
    // std::oct octal
    std::cout << std::oct;
    std::cout << -15641 << std::endl;
    std::cout << std::endl;
    std::cout << std::dec;

    // std::uppercase
    std::cout << std::uppercase;
    std::cout << std::hex;
    std::cout << 15641 << std::endl;
    std::cout << std::nouppercase;
    std::cout << std::endl;
    std::cout << std::dec;

    return 0;
}
