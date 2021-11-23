#include <iostream>
using namespace std;

bool is_leap_year(int year){
    bool is_leap = false;

    if (year % 400 == 0) is_leap = true;
    else if (year % 100 != 0 and year % 4 == 0) is_leap = true;

    return is_leap;
}

int main() {
    int y;

    while (cin >> y) {
        cout << is_leap_year(y) << endl;
    }
}