#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int m = 1;
    sum = 0;
    last = 0;
    while (m != 0) {
        cin >> m;
        sum += m;
        if (m != 0) last = m;
    }
}

int main() {
    int first_sum = 1, first_last;

    int seq_sum = 1, seq_last;

    int count = 1;

    info_sequence(first_sum, first_last);

    while (seq_sum != 0) {
        info_sequence(seq_sum, seq_last);
        if (first_sum == seq_sum and first_last == seq_last) 
            ++count;
    }
    
    cout << count << endl;
}