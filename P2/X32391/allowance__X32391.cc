#include <iostream>
using namespace std;

//d >> gastos semanales
//n >> dinero inicial
//t >> numero maximo de semanas

int main() {
  int d, n, t;
  cin >> d >> n >> t;

  int weeks = 0; //dias que tardas en quedarte sin dinero
  bool end = false;

  while (t > 0) {
    int x;
    cin >> x;
    n = n + x - d;

    if (n > 0 and end == false) weeks++;
    else end = true;

    --t;
  }

  cout << weeks << endl;

}
