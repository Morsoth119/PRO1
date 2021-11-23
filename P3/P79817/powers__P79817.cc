#include <iostream>
using namespace std;

int main() {
  int a, b, n;

  while (cin >> a >> b) {
    n = a;
    a = 1;
    for (int i = 0; i < b; i++) {
      a *= n;
    }
    cout << a << endl;
  }
}
