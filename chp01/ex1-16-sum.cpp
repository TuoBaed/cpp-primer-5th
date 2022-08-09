#include <iostream>
#include <cstdio>

int main() {
    std::cout << "Input a series of numbers and I will compute sum of these numbers!\n";
    int value = 0;
    int sum = 0;

    while (std::cin >> value) { 
        sum += value;
    }
    printf("Sum is %d\n", sum);

    return 0; 
}