#include <iostream>
using namespace std;

int main() {
  int i, x;
  cin >> i;
  int a = 0;

  while (a < i and i > 0 and cin >> x) {
    ++a;
  }

  if (a == i and i != 0) cout << "At the position " << i << " there is a(n) " << x  << "." << endl;
  else cout << "Incorrect position." << endl;

}
