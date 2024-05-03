#include <iostream>
#include <limits>

int main(int argc, char* argv[]) {
    unsigned long long ul = 255;

    std::cout << "ul = " << ul << std::endl;
    std::cout << "sizeof(ul) = " << sizeof(ul) << std::endl;
    std::cout << "unsigned long long max = "
        << +std::numeric_limits<unsigned long long>::max()
        << std::endl;
    std::cout << std::endl;



    signed long long sl = -15;

    std::cout << "sl = " << sl << std::endl;
    std::cout << "sizeof(sl) = " << sizeof(sl) << std::endl;
    std::cout << "signed long long max =" 
        << +std::numeric_limits<signed long long>::max()
        << std::endl;
    std::cout << std::endl;

    long long l = 97;

    std::cout << "l = " << l << std::endl;
    std::cout << "sizeof(l) = " << sizeof(l) << std::endl;
    std::cout << "long long max = "
        << +std::numeric_limits<long long>::max()
        << std::endl;
    std::cout << std::endl;
}