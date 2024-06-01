#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    std::string str{"Hello, World!"};

    std::cout << str << std::endl;
    std::cout << str.length() << std::endl;
    std::cout << str.substr(0, 3) << std::endl;
    std::cout << str[5] << std::endl;
    std::cout << std::boolalpha << str.empty() << std::endl;

    return 0;
}