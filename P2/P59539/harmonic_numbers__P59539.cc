#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  double r = 0.0;

  for (int i = 1; i <= n; i++) {
    r += 1.0/i;
  }
  cout << fixed;
  cout.precision(4);
  cout << r << endl;
}
