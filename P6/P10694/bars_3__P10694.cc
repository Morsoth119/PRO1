#include <iostream>
using namespace std;

void bars(int m) {
    if (m == 1) cout << "*" << endl;
    else {
        bars(m - 1);
        bars(m - 1);
        for (int i = 0; i < m; ++i) cout << "*";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    bars(n);
}