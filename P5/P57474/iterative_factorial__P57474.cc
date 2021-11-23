#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = n;

    if (n == 0) fact = 1;
    else {
        while (n > 1) {
            fact *= (n - 1);
            --n;
        }
    }

    return fact;
}

int main() {
    int x;

    while (cin >> x) {
        cout << factorial(x) << endl;
    }
}