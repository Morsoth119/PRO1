#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d) {
    int max;

    if (a >= b and a >= c and a >= d) max = a;
    else if (b >= c and b >= d) max = b;
    else if (c >= d) max = c;
    else max = d;

    return max;
}

int main() {
    int x, y, z, w;

    while (cin >> x >> y >> z >> w) {
        cout << max4(x, y, z, w) << endl;
    }
}