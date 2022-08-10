#include <iostream>


int main() {
    std::cout << sizeof(L'a') << "\t"
              << U'爱' << std::endl;

    int month = 0123;
    std::cout << month << "\n";

    int val1 = 10, &refval1 = val1;
    double val2 = 3.14, &refval2 = val2;
    std::cout << val1 << "\t" << refval1 << "\n" 
              << val2 << "\t" << refval2 << std::endl;

    refval1 = 20;
    val2 = 6.28;
    std::cout << val1 << "\t" << refval1 << "\n" 
              << val2 << "\t" << refval2 << std::endl;

    val1 = val2;
    refval2 = 20;
    std::cout << val1 << "\t" << refval1 << "\n" 
              << val2 << "\t" << refval2 << std::endl;

    std::cout << &val1 << "\t" << &refval1 << std::endl;

    return 0;
}