#include <iostream>
using namespace std;

int main() {
  //n (input), x (num d'espais), y (num de X)
  int n, x, y;

  while (cin >> n) {
    x = n - 1; //num inicial d'espais
    y = n; //num inicial de X
    //num de files es igual a 3n - 2
    for (int i = 0; i < (3 * n - 2); ++i) {
      //a cada fila hi ha x+y caracters
      for (int j = 0; j < (x + y); ++j) {
        //si encara hem de posar espais, posem espais
        if (j < x) cout << " ";
        //si ja hem posat tots els espais, posem X
        else cout << "X";
      }

      //com varian x i y:
      //si encara anem per les n-1 files
      if (i < (n - 1)) {
        --x; //restem 1 a x
        y += 2; //sumem 2 a y
      }
      //si ja hem fet les primeres n-1 files i les n files del mig
      else if (i > (2 * n - 3)) {
        ++x; //sumem 1 a x
        y -= 2; //restem 2 a y
      }
      cout << endl; //salt de linia entre files
    }
    cout << endl; //salt de linia final
  }
}
