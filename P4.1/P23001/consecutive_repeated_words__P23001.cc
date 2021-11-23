#include <iostream>
using namespace std;

int main() {
  string o, p;
  cin >> o;

  int count = 1;
  int max = 1;

  while (cin >> p) {
    if (p == o) ++count;
    else count = 0;

    if (count > max) max = count;
  }

  cout << max << endl;

}
