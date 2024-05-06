#include <iostream>

void basic_example() {
    std::cout << "basic example" << std::endl;

    int sum = 0;
    const int size = 10;
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while((sum < 10) && (index < size)) {
        sum += array[index];
        ++index;
    }
    std::cout << "result sum = " << sum << std::endl;
    std::cout << std::endl;

}

void continue_example() {
    std::cout << "continue example" << std::endl;

    int sum = 0;
    const int size = 10;
    int array[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while((sum < 10) && (index < size)) {
        // Endless cycle here!
        // if (array[index] % 2)
        //      continue;

        if (array[index] % 2) {
            ++index;
            continue;
        }
        sum += array[index];
        ++index;
    }
    std::cout << "result sum = " << sum << std::endl;
    std::cout << std::endl;

}

void break_example() {
    std::cout << "break example" << std::endl;

    int sum = 0;
    const int size = 10;
    int array[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while(index < size) {
        sum += array[index];
        if(sum >= 10)
            break;
        ++index;
    }
    std::cout << "result sum = " << sum << std::endl;
    std::cout << std::endl;


}

void do_while_example() {

    int file_handler = 5;
    bool error = false;
    do {
        // do read
        if(error)
            break;

        // do read more
        if(error)   
            break;

        // do write
        if(error)
            break;
    } while(0);

    // close file here

}

int main() {
    basic_example();
    continue_example();
    break_example();
    do_while_example();
}