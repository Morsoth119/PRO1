#include <iostream>
using namespace std;

int evaluate(int& n) {
    char c;
    cin >> c;
    if (c >= '0' and c <= '9') return int(c - '0');
    else if (c == '*') return evaluate(n) * evaluate(n);
    else if (c == '+') return evaluate(n) + evaluate(n);
    else if (c == '-') return evaluate(n) - evaluate(n);
    else return n;
}

int main() {
    int n;

    cout << evaluate(n) << endl;
}