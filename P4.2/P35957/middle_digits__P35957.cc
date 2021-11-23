#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    n *= 2;
    int prev = 0;
    int loser = -1;
    bool result = false;

    int i = 0;

    while (i < n and not result) {
        cin >> m;
        int p = m;
        int n_digits = 0;

        //calcular el num de digits de m
        if (p == 0) n_digits = 1;
        else {
            while (p > 0) {
                p /= 10;
                ++n_digits;
            }
        }

        //comprovar si m es parell
        //sino, veure quien es el digit del mig
        if (n_digits % 2 == 0) {
            loser = i;
            result = true;
        }
        else {
            for (int x = 0; x < (n_digits / 2); ++x) {
                m /= 10;
            }
            m %= 10; 
        }

        //comprovar si el digit anterior y m son iguals o no
        if (i != 0 and m != prev) {
            loser = i;
            result = true;
        }
        else prev = m;

        ++i;
    }

    //mostrar qui guanya
    if (loser % 2 != 0 and loser >= 0) cout << "A" << endl;
    else if (loser % 2 == 0 and loser >= 0) cout << "B" << endl;
    else cout << "=" << endl;
}