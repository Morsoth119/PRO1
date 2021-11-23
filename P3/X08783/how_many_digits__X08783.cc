#include <iostream>
using namespace std;

int main() {
  int b, n;

  while (cin >> b >> n) {
    int d = 1;
    while (n >= b) {
      n /= b;
      ++d;
    }
    cout << d << endl;
  }
}
