#include <iostream>
using namespace std;

int main() {
  char m;
  int x = 0;
  int y = 0;

  while (cin >> m) {
    if (m == 'n') --y;
    else if (m == 's') ++y;
    else if (m == 'e') ++x;
    else if (m == 'w') --x;
  }

  cout << "(" << x << ", " << y << ")" << endl;
}
