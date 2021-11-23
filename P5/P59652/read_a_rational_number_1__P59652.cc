#include <iostream>
using namespace std;

void read_rational(int& num, int& den) {
    int mcd;
    char useless;

    cin >> num  >> useless >> den;

    int n1 = num;
    int d1 = den;
    

    while (n1 != 0 and d1 != 0) {
        if (n1 > d1) n1 %= d1;
        else d1 %= n1;
    }
    
    if (d1 == 0) mcd = n1;
    else mcd = d1;

    num /= mcd;
    den /= mcd;
}

int main() {
    int n , d;

    read_rational(n, d);    

    cout << n << " " << d << endl;
}