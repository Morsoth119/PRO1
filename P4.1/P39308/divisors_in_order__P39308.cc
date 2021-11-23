#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;

  while (cin >> n) {
    cout << "divisors of " << n << ":";
    int last = 0;;
    for (int i = 1; i * i <= n; i++) {
      if (n % i == 0) {
        cout << " " << i;
        last = i;
      }
    }
    for (int j = sqrt(n); j >= 1; j--) {
      if (n % j == 0 and last != n / j) cout << " " << n / j;
    }
    cout << endl;
  }
}
