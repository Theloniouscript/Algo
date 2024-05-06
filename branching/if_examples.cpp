#include <iostream>

void basic() {
    std::cout << "basic example" << std::endl;

    int ivalue = 42;
    if(ivalue) { // true
        // this code will be executed
        std::cout << "first if" << std::endl;
    }

    bool condition = false;
    if(condition) { // false
        // this code will not be exacuted
        std::cout << "second if" << std::endl;
    }

    if(condition && ivalue) { // false
        // this code will not be executed
        std::cout << "third if" << std::endl;
    }

    if(condition || ivalue) { // true
        // this code will be executed
        std::cout << "fourth if" << std::endl;

    }

}

void variables() {
    std::cout << "variables example" << std::endl;

    bool condition = true;
    if(condition) {
        int someVariable = 42;
        std::cout << "first if" << std::endl;
        // work with someVariable here
        if(someVariable) {
            // nested if
            std::cout << "nested if. someVariable = " << someVariable << std::endl;

        }
        else {
            // with or without else block
            std::cout << "nested else" << std::endl;
        }    
    }
    else {
        // someVariable is not visible here
        std::cout << "first else" << std::endl;
    }   
    
}

void cpp17() {
    std::cout << "cpp17 example" << std::endl;

    bool condition = true;

    if(int someVariable = 42; condition) {
        // work with someVariable here
        std::cout << "first if. someVariable = " << someVariable << std::endl;

    }
    else {
        // someVariable is visible here
        std::cout << "first else. someVariable = " << someVariable << std::endl;
    }
}

int main() {
    
    basic();
    variables();
    cpp17();

    return 0;

}