#include <iostream>
using namespace std;

int main() {   
    int n;
    bool found = false;
    int line = 0, last = 0;
    
    while (cin >> n) {
        found = true;
        string curr, prev;

        for (int i = 0; i < n; ++i) {
            cin >> curr;
            if (i != 0 and found) found = (prev <= curr);
            prev = curr;
        }
        
        line++;
        if (found) last = line;
    }

    if (last != 0) cout << "The last line in increasing order is " << last << "." << endl;
    else cout << "There is no line in increasing order." << endl;
    
}