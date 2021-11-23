#include <iostream>
using namespace std;

void reverse(int& n) {
    string s;
    cin >> s;
    if (s == "") n = -n + (n / 2);
    else {
        ++n;
        reverse(n);
        if (n >= 0) cout << s << endl;
        ++n;
    }
}

int main() {
    int n = 0;
    reverse(n);
}