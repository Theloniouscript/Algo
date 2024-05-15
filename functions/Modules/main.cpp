#include "calculations.h"
#include "logging.h"

#include <iostream>

int main(int, char**) {

    std::cout << sum(1, 5) << std::endl;
    std::cout << doSomeCalculation(3.4, 9) << std::endl;
    std::cout << doSomeOtherCalculation (0.1, 0.9) << std::endl;

    return 0;
}