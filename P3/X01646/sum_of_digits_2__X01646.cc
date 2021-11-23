#include <iostream>
using namespace std;

int main() {
  int b, n;
  cin >> b;

  while (cin >> n) {
    int x = 0;
    cout << n << ": ";
    while (n > 0) {
      x += n % b;
      n /= b;
    }
    cout << x << endl;
  }
}
