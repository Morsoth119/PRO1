#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2) {
    double num1 = double(n1) / d1;
    double num2 = double(n2) / d2;

    return num1 < num2;
}

int main() {
    int a, b, c, d;

    while (cin >> a >> b >> c >> d) {
        cout << c_frac(a, b, c, d) << endl;
    }
}