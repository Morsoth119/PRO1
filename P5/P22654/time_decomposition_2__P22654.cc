#include <iostream>
using namespace std;

void decompose(int n, int& h, int& m, int& s) {
    s = n;
    m = 0;
    h = 0;

    m = s / 60;
    s %= 60;

    h = m / 60;
    m %= 60;
}

int main() {
    int n, h, m, s;
    
    while (cin >> n) {
        decompose(n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
    
}