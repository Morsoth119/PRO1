#include <iostream>
using namespace std;

int main() {
  int n, m;

  cout << fixed;
  cout.precision(10);

  while (cin >> n >> m) {
    double h = 0;
    for (int i = m + 1; i <= n; i++) {
      h += 1.0/i;
    }
    cout << h << endl;
  }
}
