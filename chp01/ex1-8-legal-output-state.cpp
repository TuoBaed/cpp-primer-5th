#include <iostream>

// #define ONE     0
// #define TWO     0
// #define THREE   0
// #define FOUR    0

int main() {
    // legal
    // #if ONE    
    // std::cout << "/*";
    // #endif

    // legal
    // #if TWO
    // std::cout << "*/";
    // #endif

    // illegal
    // #if THREE
    // std::cout << /* "*/" */;
    // #endif

    // legal
    #if FOUR
    std::cout << /* "*/" /* "/*" */;
    #endif 

    return 0;
}