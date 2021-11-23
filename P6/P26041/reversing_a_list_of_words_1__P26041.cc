#include <iostream>
using namespace std;

void reverse() {
    string s;
    cin >> s;
    if (s != "") {
        reverse();
        cout << s << endl;
    }
}

int main() {
    reverse();
}