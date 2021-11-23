#include <iostream>
using namespace std;

int main() {   
    char p1 = '_'; char p2 = '_';
    char p3 = '_'; char p4 = '_';
    char p5;
    cin >> p5;

    bool found = false;

    while (not found and p5 != '.') {
        found = (p1 == 'h' and p2 == 'e' and p3 == 'l' and p4 == 'l' and p5 == 'o');
        
        p1 = p2;
        p2 = p3;
        p3 = p4;
        p4 = p5;
        cin >> p5;
    }
    if (found) cout << "hello" << endl;
    else  cout << "bye" << endl;
}