#include <iostream>

int main() {
    char char_number = 1;
    unsigned char uchar_number = 1;
    signed char schar_number = 1;

    short short_number = 1;
    unsigned short ushort_number = 1;

    int int_number = 1;
    unsigned int uint_number = 1;

    long long_number = 1;
    unsigned long ulong_number = 1;

    long long llong_number = 1;
    unsigned long long ullong_number = 1;

    std::cout << "size of 'char' is " << sizeof(char_number)
              << " range from " << (int)(char)(char_number << 7) 
              << " to " << (char_number << 7) - 1
              << std::endl;

    std::cout << "size of 'unsigned char' is " << sizeof(uchar_number)
              << " range from " << 0
              << " to " << (char_number << 8) - 1
              << std::endl;

    std::cout << "size of 'signed char' is " << sizeof(schar_number)
              << " range from " << (schar_number << 7) 
              << " to " << (schar_number << 7) - 1
              << std::endl;

    std::cout << "size of 'int' is " << sizeof(int)
              << " range from " << (int_number << (sizeof(int) * 8 - 1))
              << " to " << (int_number << (sizeof(int) - 1)) - 1
              << std::endl;

    std::cout << "size of 'unsigned int' is " << sizeof(uint_number)
              << " range from " << (uint_number << (sizeof(unsigned int) * 8- 1))
              << " to " << (uint_number << (sizeof(unsigned int) - 1)) - 1
              << std::endl;

    std::cout << "size of 'short' is " << sizeof(short_number)
              << " range from " << (short_number << (sizeof(short) * 8- 1))
              << " to " << (short_number << (sizeof(short) - 1)) - 1
              << std::endl;

    
    return 0;
}   