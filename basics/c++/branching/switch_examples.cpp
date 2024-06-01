#include <iostream>

void basic_example() {
    std::cout << "basic_example" << std::endl;

    int code = 3;

    switch(code) {
        case 0:
            std::cout << "Code == 0" << std::endl;
            break;
        case 1:
            std::cout << "Code == 1" << std::endl;
            break;
        case 2:
            std::cout << "Code == 2" << std::endl;
            break;
        case 3:
            std::cout << "Code == 3" << std::endl;
            break;
        default:
            std::cout << "default case" << std::endl;
            break;
    }

    
}

void cpp17_example() {
    std::cout << "cpp17_example" << std::endl;

    int code = 3;

    switch(int someVariable = 42; code) {
        case 0:
            std::cout << "Code == 0" << std::endl;
            break;
        case 1:
            std::cout << "Code == 1" << std::endl;
            break;
        case 2:
            std::cout << "Code == 2" << std::endl;
            break;
        case 3:
            std::cout << "Code == 3, someVariable = " << someVariable << std::endl;
            break;
        default:
            std::cout << "default case" << std::endl;
            break;
    }

    
}

int main() {
    basic_example();
    cpp17_example();
}