#include <iostream>
using namespace std;

void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    if (n / 10 == 0) {
        maxim = n;
        minim = n;
    }
    else {
        digit_maxim_i_minim(n / 10, maxim, minim);
        if (maxim < n % 10) maxim = n % 10;
        if (minim > n % 10) minim = n % 10;
    }
}

int main() {
    int m;
    cin >> m;

    int d_max, d_min;

    digit_maxim_i_minim(m, d_max, d_min);

    cout << d_max << " " << d_min << endl;
}