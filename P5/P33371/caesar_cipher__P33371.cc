#include <iostream>
using namespace std;

char encoded(char c, int k) {
    if (c == '_') return ' ';
    else if (c >= 'a' and c <= 'z') {
        return 'A' + (c - 'a' + k) % 26;
    }
    else return c;
}

int main() {
    int n;
    char h;

    while (cin >> n) {
        while (cin >> h and h != '.') {
            cout << encoded(h, n);
        }
        cout << endl;
    }

}