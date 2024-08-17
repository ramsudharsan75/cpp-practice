#include <iostream>
#include <string>

int main() {
    int age;
    std::string name;
    std::cout << "Enter your name: ";
    // name without spaces
    // std::cin >> name;

    // name with spaces
    std::getline(std::cin, name);

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hi " << name << ", you are " << age << " years old." << std::endl;
}
