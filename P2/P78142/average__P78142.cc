#include <iostream>
using namespace std;

int main() {
  double n;
  double x = 0.0;
  double r = 0.0;

  cout << fixed;
  cout.precision(2);

  while (cin >> n) {
    x += n;
    ++r;
  }

  cout << x / r << endl;
}
