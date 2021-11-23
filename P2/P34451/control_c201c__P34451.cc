#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x;
  int m = 0;

  while (cin >> x) {
    if (x % n == 0) ++m;
  }

  cout << m << endl;
}
