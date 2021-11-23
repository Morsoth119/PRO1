#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    int prev = 0;

    for (int i = 0; i < n; i++) {
        int j = 0;
        int count = 0;
        while (cin >> m and m != 0) {
            if (j != 0 and m > prev) ++count;
            prev = m;
            ++j;
        }
        cout << count << endl;
    }
}