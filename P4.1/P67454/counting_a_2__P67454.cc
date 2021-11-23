#include <iostream>
using namespace std;

int main() {
  char s;
  int x = 0;
  bool end = false;

  while (cin >> s and not end) {
    if (s == 'a') ++x;
    else if (s == '.') end = true;
  }

  cout << x << endl;
}
