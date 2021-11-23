#include <iostream>
using namespace std;

int reduction_of_digits(int x){
    int n = 0;

    if (x / 10 == 0) return x;
    else {
        while (x != 0) {
            n += x % 10;
            x /= 10;
        }
        return reduction_of_digits(n);
    }
}

int main() {
    int m;

    cin >> m;

    cout << reduction_of_digits(m) << endl;
}