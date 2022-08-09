#include <iostream>

int main() {
    std::cout << "Please input 2 int numbers and I will print all int numbers between them."
              << "\n";

    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;
    
    int min = val1 > val2 ? val2 : val1;
    int max = val1 > val2 ? val1 : val2;
    while ((min < max) && ((max - min) >= 2)) {
        min++;
        std::cout << min << "\n";
    }

    return 0;
}