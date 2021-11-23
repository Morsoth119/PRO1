#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
    int m = 1;
    max = 0;
    lpos = 0;
    int cpos = 1;
    while (m != 0) {
        cin >> m;
        if (m >= max and m != 0) {
            max = m;
            lpos = cpos;
        }
        ++cpos;
    }
}

int main() {
    int n, s1_max, s1_lpos, s2_fpos = 1, c = 1;

    infoSequence(s1_max, s1_lpos);

    while (cin >> n and n != s1_max and n != 0) ++c;
    
    if (n == s1_max) s2_fpos = c;
    

    cout << s1_max << " " << s1_lpos << " ";
    if (n == s1_max) cout << s2_fpos << endl;
    else cout << "-" << endl;
    
    
}