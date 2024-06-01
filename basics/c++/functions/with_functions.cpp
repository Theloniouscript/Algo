#include <iostream>
#include <string>

int maxPositive(int *array, int size) {
    int max = 0;
    for(int i = 0; i < size; ++i)
        if (max < array[i])
            max = array[i];
    return max;
            
}

std::string formatDateTime() {
    // Very good time formatting code here
    return "[15:00:00 01-01-2001]";
}

int main(int, char**) {

    std::cout << formatDateTime() << "Hello, World!" << std::endl;

    const int length = 10;
    int array[length] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrayMax = maxPositive(array, length);
    std::cout << formatDateTime() << "arrayMax: " << arrayMax << std::endl;


    const int lengthToo = 5;
    int arrayToo[lengthToo] = {0, 1, 2, 3, 4};
    int maxToo = maxPositive(arrayToo, lengthToo);
    std::cout << formatDateTime() << "maxToo: " << maxToo << std::endl;

    return 0;
}

