#include <iostream>

void secondFunc() {                 // Stack [mainVariable, 
                                    //               returnAddress,
                                    //               firstFuncVariable, 
                                    //               returnAddress2]
    int secondFuncVariable = 678;

                                    // Stack [mainVariable, 
                                    //               returnAddress,
                                    //               firstFuncVariable, 
                                    //               returnAddress2,
                                    //               secondFuncVariable]

    // Compile time error
    // mainVariable = 42

    // Compile time error
    // firstFuncVariable = 123;

    std::cout << "secondFunc()" << std::endl;
                                    // Stack [mainVariable, 
                                    //               returnAddress,
                                    //               firstFuncVariable, 
                                    //               -,
                                    //               -]
}

int global = 55;

void firstFunc() {                  // Stack [mainVariable, 
                                    //               returnAddress,
                                    //               firstFuncVariable]
    int firstFuncVariable = 155;

    // Compile time error
    // mainVariable = 42

    firstFuncVariable = 144;
    global = 123;

    std::cout << "firstFunc()" << std::endl;

    secondFunc();                   // Stack [mainVariable, 
                                    //               returnAddress,
                                    //               firstFuncVariable, 
                                    //               returnAddress2]

                                    // Stack [mainVariable, 
                                    //               -,
                                    //               -, 
                                    //               -,
                                    //               -]
}


int main(int, char**) {             // Stack []

    int mainVariable = 0;           // Stack [mainVariable]

    // Compile time error
    // firstFuncVariable = 42


                                    // Stack [mainVariable]
    firstFunc();                    // Stack [mainVariable, returnAddress]
                                    // Stack [mainVariable]
    
    // next
    // Compile time error
    // firstFuncVariable = 42

    secondFunc();

    return 0;
}