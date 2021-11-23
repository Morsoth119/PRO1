#include <iostream>
using namespace std;

int main() {
  char a;
  int closed = 0;

  while (cin >> a and closed >= 0) {
    if (a == '(') ++closed;
    else if (a == ')') --closed;
  }

  if (closed == 0) cout << "yes" << endl;
  else cout << "no" << endl;
}
