#include <iostream>
using namespace std;

int fatten(int x) {
    if (x / 10 == 0) return x;
    else {
        if (fatten(x / 10) % 10 >= x % 10) return (fatten(x / 10) * 10) + fatten(x / 10) % 10;
        else return (fatten(x / 10) * 10) + x % 10;
    }
}

int main() {
    int n;

    cin >> n;

    cout << fatten(n) << endl;
}