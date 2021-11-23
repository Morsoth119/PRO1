#include <iostream>
using namespace std;

bool is_increasing(int n) {
    if (n / 10 == 0) 
        return true;
    else if (not is_increasing(n /10) or n % 10 < (n % 100) / 10) 
        return false;
    else 
        return true;
}

int main() {
    int m;

    cin >> m;

    cout << is_increasing(m) << endl;
}