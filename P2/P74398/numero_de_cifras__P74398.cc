#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;            //numero en base 10
  cin >> n;

  int e = 0;        //numero de digits per a la base b
  int p = n;        //per guardar el valor inicial de n

  for (int b = 2; b <= 16; b++) {
    e = 0;          //resetejar e a 0
    n = p;          //resetejar n amb el seu valor inicial


    while (pow(b, e) <= n) {
      e++;
    }

    cout << "Base " << b << ": " << e << " cifras." << endl;

  }
}
