#include <iostream>

void noParamsNoReturn() {
    std::cout << "Hello from noParamsNoReturn!" << std::endl;

}

void paramsNoReturn(int arg1, float arg2, char* arg3) {
    std::cout << "Hello from paramsNoReturn! Args:\n"
        << "args1: " << arg1 << "\n"
        << "args2: " << arg2 << "\n"
        << "args3: " << arg3 << "\n"
        << std::endl;
}

int noParamsReturn() {
    std::cout << "Hello from noParamsReturn!" << std::endl;
    return 42;
}

int paramsReturn(int arg1, int arg2) {
    std::cout << "Hello from paramsReturn!" << std::endl;
    return arg1 + arg2;
}

int inOutParams(int& value) {
    value = 156;
    return 3;
}

int main(int, char**) {

    noParamsNoReturn();

    // Compile time error
    // noParamsNoReturn(123);

    // Compile time error
    // int value = noParamsNoReturn();

    paramsNoReturn(42, 142, "trololo");

    // Compile time error
    // paramsNoReturn(42, 142);

    // Compile time error
    // paramsNoReturn("trololo", 42, 142);

    // Not an error
    // paramsNoReturn(142, 42, "trololo");

    int resultValue = noParamsReturn();

    // Not and error
    noParamsReturn();

    //paramsReturn(42, 142);

    //int paramsReturn_value = paramsReturn(42, 142);


    int inOut = 42;
    std::cout << "before inOut = " << inOut << std::endl;
    inOutParams(inOut);
    std::cout << "after inOut = " << inOut << std::endl;

    return 0;
}



