#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n) {
    int x = 0;
    int m = n;
    if (m > 0) {
      while (m > 0) {
        x += m % 10;
        m /= 10;
      }
    }
    cout << "The sum of the digits of " << n << " is " << x << "." << endl;
  }
}
