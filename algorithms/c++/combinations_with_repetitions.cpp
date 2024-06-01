#include <iostream>

using namespace std;

int factorial(int n) {

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int combinations_with_repetitions(int n, int k) {

    return factorial(n + k - 1) / (factorial(k) * factorial(n - 1));
}

int main() {
    int n; 
    int k;

    cout << "enter two integers: " << endl;

    cin >> n >> k;

    cout << combinations_with_repetitions(n, k) << endl;
}