#include <iostream>

void basic() {
    std::cout << "basic example" << std::endl;

    std::cout << "first cycle:" << std::endl;
    for(int i = 0; i<10; ++i)
        std::cout << "i = " << i << std::endl;
    std::cout << std::endl;


std::cout << "second cycle:" << std::endl;
for (int i = 10; i >= 0; --i)
    std::cout << "i = " << i <<std::endl;
std::cout << std::endl;

std::cout << "third cycle:" << std::endl; 
for(int i = 10; i < 10; ++i) // incorrect condition => no terminal output
    std::cout << "i = " << i << std::endl;
std::cout << std::endl;

}

void advanced() {
    std::cout << "advanced example" << std::endl;

    std::cout << "first cycle:" << std::endl;
    const int size = 3;
    int matrix[size][size] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    for (int i = 0, j = size-1; i < size; ++i, --j) {
        std::cout << "matrix[" << i << "]["<< j << "] = " << std::endl;
        std::cout << matrix[i][j] << std::endl;    
    }
    std::cout << std::endl;


    std::cout << "second cycle:" << std::endl;
    for(int row = 0; row < size; ++row)
        for(int col = 0; col < size; ++col) {
            std::cout << "matrix[" << row << "][" << col << "] =";
            std::cout << matrix[row][col] << std::endl;
        }
    std::cout << std::endl;


    std::cout << "third cycle:" << std::endl;
    const int size2 = 6;
    int array[size2] = {0, 1, 2, 3, 4, 5};
    for(int i = 0; i<size2; i+=2){
        std::cout << "array[" << i << "] = " << array[i] << std::endl;

    }
    std::cout << std::endl;
}

void breakEx() {
    std::cout << "break example" << std::endl;

    const int size = 10;
    bool found = false;
    int array[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 6;
    for(int i = 0; i < size; ++i) {
        if(array[i] == target) {
            found = true;
            break;
        }
    }

    if(found)
        std::cout << "target was found!" << std::endl;
    else
        std::cout << "target was not found!" << std::endl;
    std::cout << std::endl;
}

void continueEx() {
    std::cout << "continue example" << std::endl;

    const int size = 5;
    // Also possible:
    // int array[size] = {0, 1, 2, 3, 4} 
    int array[] = {0, 1, 2, 3, 4};

    for(int i = 0; i < size; ++i) {
        if(array[i] % 2)
            continue;
        std::cout << array[i] << ' ';

    }
    std::cout << std::endl << std::endl;

}

void endless() {
    std::cout << "endless example" << std::endl;

    const int size = 5;
    int array[size] = {0, 1, 2, 3, 4};
    for(unsigned int i = size - 1; i >= 0; --i) {
        std::cout << "array[" << i << "] =" << array[i] << std::endl;

    }
    std::cout << std::endl;
}

int main() {
    basic();
    advanced();
    breakEx();
    continueEx();
    // endless();

}

