#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int m = n;
  int x = 0;

  if (n == 0) x = 0;
  else {
    while (n > 0) {
      x += n % 10;
      n /= 100;
    }
  }

  if (x % 2 == 0) cout << m << " IS COOL" << endl;
  else cout << m << " IS NOT COOL" << endl;

}
