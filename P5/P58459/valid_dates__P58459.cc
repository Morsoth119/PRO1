#include <iostream>
using namespace std;

bool is_valid_date(int d, int m, int y) {
    bool is_valid = true;
    
    if ((y >= 1800 and y <= 9999) and (m >= 1 and m <= 12) and (d >= 1 and d <=31)) {
            if (m == 4 or m == 6 or m == 9 or m == 11) {
                is_valid = (d >= 1 and d <= 30);
            }
            else if (m == 2) {
                if ((y % 4 == 0 and y % 100 != 0) or (y % 400 == 0))
                    is_valid = (d >= 1 and d <= 29);
                else is_valid = (d >= 1 and d <= 28);
            }
    }
    else is_valid = false;
    
    return is_valid;
}

int main() {
    int day, month, year;

    while (cin >> day >> month >> year) {
        cout << is_valid_date(day, month, year) << endl;
    }
}