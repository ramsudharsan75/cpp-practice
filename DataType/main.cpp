#include <iomanip>
#include <iostream>

int main() {
    // Integers
    // Uninitialized variable
    int num1; // This variable will contain garbage value

    // Assignment initialization
    int num2 = 10;
    int num3 = 20;
    int num4 = num2 + num3;

    // Braced initialization
    int num5{};
    int num6{30};
    int num7{40};
    int num8{num6 + num7};

    // Functional initialization
    int num9(); // This is interpreted as a function declaration and hence store the function address, when printed it
                // will evaluate as true
    int num10(50);
    int num11(60);
    int num12(num10 + num11);

    // unsigned int
    unsigned int num13 = 10;
    unsigned num14 = 20;
    unsigned num15 = -1; // This will lead to overflow and the value will be 4294967295
    // unsigned num15_1{-1}; // This will throw compiler error

    // signed int
    signed int num16 = 10;
    signed num17 = -20;

    // short - 2 bytes
    short num18 = 10;
    short int num19 = 20;

    // long - 8 bytes
    long num20 = 10;
    long int num21 = 20;

    // unsigned short
    unsigned short num22 = 10;
    unsigned short int num23 = 20;

    // unsigned long
    unsigned long num24 = 10;
    unsigned long int num25 = 20;

    // Output
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "num3: " << num3 << std::endl;
    std::cout << "num4: " << num4 << std::endl;
    std::cout << "num5: " << num5 << std::endl;
    std::cout << "num6: " << num6 << std::endl;
    std::cout << "num7: " << num7 << std::endl;
    std::cout << "num8: " << num8 << std::endl;
    std::cout << "num9: " << num9 << std::endl;
    std::cout << "num10: " << num10 << std::endl;
    std::cout << "num11: " << num11 << std::endl;
    std::cout << "num12: " << num12 << std::endl;
    std::cout << "num13: " << num13 << std::endl;
    std::cout << "num14: " << num14 << std::endl;
    std::cout << "num15: " << num15 << std::endl;
    std::cout << "num16: " << num16 << std::endl;
    std::cout << "num17: " << num17 << std::endl;
    std::cout << "num18: " << num18 << std::endl;
    std::cout << "num19: " << num19 << std::endl;
    std::cout << "num20: " << num20 << std::endl;
    std::cout << "num21: " << num21 << std::endl;
    std::cout << "num22: " << num22 << std::endl;
    std::cout << "num23: " << num23 << std::endl;
    std::cout << "num24: " << num24 << std::endl;
    std::cout << "num25: " << num25 << std::endl;

    // Size of data types
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of short int: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of long int: " << sizeof(long) << " bytes" << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    // Fractional numbers
    std::cout << std::setprecision(20);
    float num26 = 10.5f;
    // float num27{27f}; // doesn't compile
    float num28{};
    float num29(1.01234567890123456789f);
    float num30{1.01234567890123456789f};

    double num31 = 10.5;
    double num32{27};
    double num33{};
    double num34(1.01234567890123456789);
    double num35{1.01234567890123456789};

    long double num36 = 10.5L;
    long double num37{27l};
    long double num38{};
    long double num39(1.01234567890123456789l);
    long double num40{1.01234567890123456789l};

    std::cout << "num26: " << num26 << std::endl;
    std::cout << "num28: " << num28 << std::endl;
    std::cout << "num29: " << num29 << std::endl;
    std::cout << "num30: " << num30 << std::endl;
    std::cout << "num31: " << num31 << std::endl;
    std::cout << "num32: " << num32 << std::endl;
    std::cout << "num33: " << num33 << std::endl;
    std::cout << "num34: " << num34 << std::endl;
    std::cout << "num35: " << num35 << std::endl;
    std::cout << "num36: " << num36 << std::endl;
    std::cout << "num37: " << num37 << std::endl;
    std::cout << "num38: " << num38 << std::endl;
    std::cout << "num39: " << num39 << std::endl;
    std::cout << "num40: " << num40 << std::endl;

    // Size of data types
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;

    double num41 = 1.1 / 0; // no warning here when dividing fractional number by 0
    double num42 = 1.1 / 0.0;
    // double num43{num40 / 0};   // doesn't compile
    // double num44{num40 / 0.0}; // doesn't compile
    double num45 = 1 / 0; // warning: division by zero and is results in 0
    double num46 = 0.0 / 0.0;
    // double num47{0 / 0}; // doesn't compile
    double num48{0.0 / 0.0};
    double num49{1};

    std::cout << "num41: " << num41 << std::endl;
    std::cout << "num42: " << num42 << std::endl;
    std::cout << "num45: " << num45 << std::endl;
    std::cout << "num46: " << num46 << std::endl;
    std::cout << "num48: " << num48 << std::endl;
    std::cout << "num49: " << num49 << std::endl;

    std::cout << "----------------------------------------" << std::endl;

    // Boolean
    std::cout << std::boolalpha;
    bool red_light{true};

    if (red_light) {
        std::cout << "Stop: " << red_light << std::endl;
    } else {
        std::cout << "Go" << std::endl;
    }

    // Character - 1 byte - stored as ASCII value
    char ch1{'A'};
    char ch2{92};

    std::cout << "ch1: " << ch1 << std::endl;
    std::cout << "ch2: " << ch2 << std::endl;
    std::cout << "ch2 in int: " << static_cast<int>(ch2) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;

    // auto
    auto var1{12};
    auto var2{12.5};
    auto var3{12.5f};
    auto var4{12.5l};
    auto var5{'A'};
    auto var6{true};
    auto var7{123u};
    auto var8{123ul};
    auto var9{123ll};
    auto var10{123l};

    var2 = 'A'; // This will be stored as ASCII value
    var5 = -1; // This will lead to overflow and the value will be 255
    var7 = -1; // This will lead to overflow and the value will be 4294967295

    std::cout << "var2: " << var2 << std::endl;
    std::cout << "var5: " << var5 << std::endl;
    std::cout << "var7: " << var7 << std::endl;

    return 0;
}
