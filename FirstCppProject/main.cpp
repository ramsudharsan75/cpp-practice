#include <iostream>
#include <string>

int main() {
    std::string country;
    std::cout << "Enter your country: ";
    std::getline(std::cin, country);
    std::cout << "I've heard great things about " << country << ". I'd like to go sometime.";
    return 0;
}
