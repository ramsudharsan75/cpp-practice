#include <bitset>
#include <iostream>

int main() {
    unsigned short int num{15};

    std::cout << "data (dec): " << num << std::endl;
    std::cout << std::oct << "data (oct): " << std::showbase << num << std::endl;
    std::cout << std::hex << "data (hex): " << std::showbase << num << std::endl;
    std::cout << "data (bin): " << std::bitset<16>(num) << std::endl;

    // left shift
    num = static_cast<unsigned short int>(
        num << 1); // any data type of size < int (4 bytes) inherently gets converted to int for bitwise operations and
                   // needs static casting to bring it back toh the original data type
    std::cout << "data (bin): " << std::bitset<16>(num) << std::endl;

    return 0;
}