#include <iostream>

int main() {
    double length;
    double width;
    double height;

    std::cout << "Welcome to the box calculator. Please type in length, width and height information :" << std::endl;
    std::cout << "length : ";
    std::cin >> length;
    std::cout << "width : ";
    std::cin >> width;
    std::cout << "height : ";
    std::cin >> height;
    std::cout << "The base area is : " << length * width << std::endl;
    std::cout << "The volume is : " << length * width * height << std::endl;

    return 0;
}