#include <iostream>

void func() {
    std::cout << "func()" << std::endl;
    // func();
}

int maxPositive(int * array, int length) {
    int max = 0;
    for (int i = 0; i < length; ++i)
        if (max < array[i])
            max = array[i];
    return max;
}

int maxPositiveRecursion(int * array, int length, int max, int index) {
    if (index >= length)
        return max;
    if(max < array[index])
        max = array[index];
    return maxPositiveRecursion(array, length, max, index + 1);
}

int factorial(int value) {
    if (value < 3)
        return value;
    return value * factorial(value - 1);
}

int main(int, char**) {

    func();

    const int length = 6;
    int array[length] = {0, 1, 2, 3, 4, 5};

    std::cout << "max: " << maxPositive(array, length) << std::endl;

    std::cout << "max recursive: " 
        << maxPositiveRecursion(array, length, 0, 0) << std::endl;

    std::cout << "factorial: " << factorial(10) << std::endl;

    return 0;

}

