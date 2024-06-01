#include <iostream>

using namespace std;

int factorial(int n) {

    /* Time consuming solution:
    
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);*/ 

    int result = 1;
    for (int i = 1; i <= n; ++ i){
        result *= i;
    }        

    return result;
}

int combinations(int n, int k) {

    return factorial(n) / (factorial(k) * (factorial(n - k)));
}

int main() {
    int n;
    int k;

    cout << "enter two integers: " << endl;
    cin >> n >> k;

    cout << combinations(n, k) << endl;

    return 0;
}