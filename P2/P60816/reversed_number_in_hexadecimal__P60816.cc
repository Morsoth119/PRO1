#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  //si n es 0 escriu 0
  if (n == 0) cout << n;
  else {
    //mentre hi hagi xifres
    while (n > 0) {
      //si la xifra esta entre 10-15 >> escriu la lletra associada
      if (n % 16 > 9) cout << char(int('A') + (n % 16) - 10);
      //sino escriu el numero de la xifra
      else cout << n % 16;
      n /= 16;
    }
  }

  cout << endl;
}
