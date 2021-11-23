#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int p = x;
  int n = 0;

  if (x == 0) n = 1;
  else {
    while (x > 0) {
      x /= 10;
      n++;
    }
  }

  cout << "The number of digits of " << p << " is " << n << "." << endl;
}
