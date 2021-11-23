#include <iostream>
using namespace std;

bool is_prime(int m) {
    bool prime = true;
    if (m == 0 or m == 1) prime = false;
    else {
        int i = 2;
        while (prime and i * i <= m) {
            prime = (m % i != 0);
            ++i;
        }
    }
    return prime;
}

int main() {
    int n;

    while (cin >> n and is_prime(n)) {
        ++n;
        while (not is_prime(n)) {
            ++n;
        }

        cout << n << endl;
    }
}