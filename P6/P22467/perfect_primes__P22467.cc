#include <iostream>
using namespace std;

bool is_prime(int n) {
    bool prime = true;
    if (n == 0 or n == 1) prime = false;
    
    for (int i = 2; i * i <= n; ++i) {
        if (prime) prime = (n % i != 0);
    }
    return prime;
}

bool is_perfect_prime(int n) {
    int sum = 0;
    int x = n;
    while (x != 0) {
        sum += x % 10;
        x /= 10;
    }
    
    if (n / 10 == 0) return is_prime(n);
    else return is_perfect_prime(sum) and is_prime(n);
    
}

int main() {
    int m;

    cin >> m;

    cout << is_perfect_prime(m) << endl;
}