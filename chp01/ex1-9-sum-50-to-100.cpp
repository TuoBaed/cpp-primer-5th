#include <iostream>

int main() {
    int start = 50;
    int end = 100;
    int sum = 0;

    while(start <= end) {
        sum += start;
        start++;
    }

    std::cout << "Sum from 50 to 100 inclusive is: "
              << sum << std::endl;

    return 0;
}