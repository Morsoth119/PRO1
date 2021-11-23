#include <iostream>
using namespace std;

void factor(int n, int& f, int& q) {
    q = 0;

    // Treure factors 2..sqrt(n).
    for (int i = 2; i * i <= n; ++i) {

        // Dividim per i tantes vegades com es pugui
        int compt = 0;
        while (n % i == 0) {
            ++compt;
            n = n / i;
        }

        // Actualitzem si factor i ha resultat mes frequent
        if (compt > q) {
            q = compt;
            f = i;
        }
    }

    // S'han tret tots els factors de n, per tant ara n == 1 o un ultim primer.
    // Si no s'han trobat, es perque la n inicial ja era un primer > 2. 
    // Controlem aquest cas.
    if (q == 0) {
        f = n;
        q = 1;
    }
}

int main() {
    int x, y, z;

    while (cin >> x) {
        factor(x, y, z);
        cout << y << " " << z << endl;
    }
}