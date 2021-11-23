#include <iostream>
using namespace std;

int main() {
  double c;
  cin >> c;
  double i;
  cin >> i;
  int y;
  cin >> y;
  string t;
  cin >> t;

  cout << fixed;
  cout.precision(4);

  if (t == "simple") {
    c += c * i / 100 * y;
  }
  else if (t == "compound") {
    for (int z = 0; z < y; z++) {
      c += c * i / 100;
    }
  }

  cout << c << endl;
}
