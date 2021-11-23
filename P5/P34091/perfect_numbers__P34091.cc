#include <iostream>
using namespace std;

bool is_perfect(int n) {
    int count = 0;
    if (n != 1) count = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) count += i + (n / i);
    }
    
    return (n == count);
}

int main() {
    int num;
    cin >> num;

    cout << is_perfect(num) << endl;
}