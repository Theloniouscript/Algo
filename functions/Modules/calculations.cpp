#include "calculations.h"
#include "logging.h"

int sum(int a, int b) {
    warning("sum from calculation module");
    return a + b;
}

int doSomeCalculation(double a, int b) {
    warning("doSomeCalculation from calculation module");
    return static_cast<int>(a + b);
}

double doSomeOtherCalculation(double a, double b) {
    error("doSomeOtherCalculation from calculation module");
    return a + b;
}