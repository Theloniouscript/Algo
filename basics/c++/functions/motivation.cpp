#include <iostream>

int main(int, char**) {

    std::cout << "[15:00:00 01-01-2001]" << "Hello, World!" << std::endl;

    const int length = 10;
    int array[length] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // find max here
    int max = 0;
    for(int i = 0; i<length; ++i)
        if (max < array[i])
            max = array[i];
    std::cout << "[15:00:00 01-01-2001]" << "max: " << max << std::endl;


    const int lengthToo = 5;
    int arrayToo[lengthToo] = {0, 1, 2, 3, 4};
    // Find max again
    int maxToo = 0;
    
    for (int i = 0; i < lengthToo; ++i)
        if (maxToo < arrayToo[i])
            maxToo = arrayToo[i];
    std::cout << "[15:00:00 01-01-2001]" << "max: " << maxToo << std::endl;

    return 0;

}