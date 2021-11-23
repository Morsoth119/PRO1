#include <iostream>
#include <cmath>
using namespace std;

double dist_or(double x, double y) {
    double dist;

    dist = sqrt((x * x) + (y * y));

    return dist;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << dist_or(x, y) << endl;
}