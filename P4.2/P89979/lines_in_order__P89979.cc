#include <iostream>
using namespace std;

int main() {   
    int n;
    bool is_correct = false;
    int line = 0;
    
    while (not is_correct and cin >> n) {
        is_correct = true;
        string curr, prev;

        for (int i = 0; i < n; ++i) {
            cin >> curr;

            if (i != 0 and is_correct) is_correct = (prev <= curr);
            
            prev = curr;
        }

        ++line;
    }

    if (is_correct) cout << "The first line in increasing order is " << line << "." << endl;
    else cout << "There is no line in increasing order." << endl;
    
}