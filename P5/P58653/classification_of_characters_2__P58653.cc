#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "true" << endl;
    else cout << "false" << endl;
}

int main() {
    char h;
    cin >> h;

    print_line(h, "letter", (h >= 'A' and h <= 'Z') or (h >= 'a' and h <= 'z'));
    print_line(h, "vowel", (h == 'a' or h == 'e' or h == 'i' or h == 'o' or h == 'u'
     or h == 'A' or h == 'E' or h == 'I' or h == 'O' or h == 'U'));
    print_line(h, "consonant", (h > 'a' and h != 'e' and h != 'i' and h != 'o' and h != 'u' and h <= 'z')
     or (h > 'A' and h != 'E' and h != 'I' and h != 'O' and h != 'U' and h <='Z'));
    print_line(h, "uppercase", (h >= 'A' and h <= 'Z'));
    print_line(h, "lowercase", (h >= 'a' and h <= 'z'));
    print_line(h, "digit", (h >= '0' and h <= '9'));
}