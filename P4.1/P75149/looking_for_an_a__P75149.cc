#include <iostream>
using namespace std;

int main() {
  char s;
  bool a = false;

  while (cin >> s and not a) {
    if (s == 'a') a = true;
  }

  if (a) cout << "yes" << endl;
  else cout << "no" << endl;
}
