#include <iostream>
#include "Math.h"

int main() {
    int number = 8;
    std::cout << number << std::endl;

    number = 7;
    std::cout << number << std::endl;

    int result = sum(2, 9);
    std::cout << result << std::endl;

    return 0;
}
