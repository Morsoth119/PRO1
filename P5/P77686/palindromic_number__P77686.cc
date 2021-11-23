#include <iostream>
using namespace std;

bool is_palindromic(int n) {
    int x = n;
    int m = 0;

    while (x > 0) {
        m = (m * 10) + (x % 10);
        x /= 10;
    }

    return (n == m);
}

int main() {
    int x;

    while (cin >> x) {
        cout << is_palindromic(x) << endl;
    }
}