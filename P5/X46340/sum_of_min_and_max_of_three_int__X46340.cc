#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {
    int sum, min, max;

    if (x > y and x > z) max = x;
    else if (y > z) max = y;
    else max = z;

    if (x < y and x < z) min = x;
    else if (y < z) min = y;
    else min = z;

    sum = min + max;

    return sum;
}

int main() {

    int a, b, c;
    while (cin >> a >> b >> c) {
        cout << sum_min_max(a, b, c) << endl;
    }
    

}