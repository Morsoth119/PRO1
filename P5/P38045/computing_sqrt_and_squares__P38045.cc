#include <iostream>
#include <cmath>
using namespace std;

/*
**int square(int x) {
**    return x * x;
**}
*/

int power(int a, int b) {
    for (int i = 1; i < b; ++i) {
        a *= a;
    }
    return a;
}

int main() {
    cout << fixed;
    cout.precision(6);

    int n;
    while (cin >> n) {
        cout << power(n, 2) << " " << sqrt(n) << endl;
    }
    
}