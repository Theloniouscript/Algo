#include <iostream>

int main(int arc, char* argv[]) {

    char symbol = 'A';
    std::cout << "symbol = " << symbol << std::endl;

    // Compile time error - only one symbol, not a string
    // char many = "Hello, World!";

    std::cout << "Hello, World!" << std::endl;

    return 0;
}