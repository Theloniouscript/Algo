#include <iostream>

int main(int arc, char* argv[]) {

    int intArray[] = {0, 1, 2, 3, 4, 5, 6};

    
    std::cout << "sizeof(intArray) = " << sizeof(intArray) << std::endl;
    std::cout << "intArray = " << intArray << std::endl;
    std::cout << "intArray[0] =" << intArray[0] << std::endl;
    std::cout << "intArray[3] =" << intArray[3] << std::endl;
    std::cout << "intArray[6] =" << intArray[6] << std::endl;
    std::cout << std::endl;

    // not a good idea, no runtime checks
    // undefined behaviour here
    // std::cout << "intArray[10] =" << intArray[10] << std::endl;

    char badSymbArray[] = {'H', 'e','l', 'l', 'o', '!'};

    std::cout << "sizeof(badSymbArray) = " << sizeof(badSymbArray) << std::endl;
    std::cout << "badSymbArray = " << badSymbArray << std::endl;
    std::cout << std::endl;

    char symbArray[] = {'H', 'e','l', 'l', 'o', '!', '\0'};

    std::cout << "sizeof(symbArray) = " << sizeof(symbArray) << std::endl;
    std::cout << "symbArray = " << symbArray << std::endl;
    std::cout << std::endl;

    return 0;

}