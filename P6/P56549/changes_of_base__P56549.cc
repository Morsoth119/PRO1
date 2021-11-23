#include <iostream>
using namespace std;

void dec_to_bin(int x) {
    if (x == 0 or x == 1) cout << x;
    else {
        dec_to_bin(x / 2);
        cout << x % 2;
    }
}

void dec_to_oct(int x) {
    if (x >= 0 and x <= 7) cout << x;
    else {
        dec_to_oct(x / 8);
        cout << x % 8;
    }
}

void dec_to_hex(int x) {
    if (x >= 0 and x <= 9) cout << x;
    else if (x >= 10 and x <= 15) cout << char('A' + x - 10);
    else {
        dec_to_hex(x / 16);
        int m = x % 16;
        if (m >= 10 and m <= 15) cout << char('A' + m - 10);
        else cout << m;
    }
}


int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        dec_to_bin(n);
        cout << ", ";
        dec_to_oct(n);
        cout << ", ";
        dec_to_hex(n);
        cout << endl;
    }
    


}