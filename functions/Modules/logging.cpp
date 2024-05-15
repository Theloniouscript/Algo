#include "logging.h"

#include <iostream>

void warning(const char *message) {
    std::cout << "[warning] " << message << std::endl;
}

void error(const char *message) {
    std::cout << "[error] " << error << std::endl;
}