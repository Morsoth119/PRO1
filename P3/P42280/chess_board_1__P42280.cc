#include <iostream>
using namespace std;

int main() {
  int f, c;
  cin >> f >> c;
  char x;
  int t = 0;

  for (int i = 0; i < f; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> x;
      t += int(x) - int ('0');
    }
  }
  cout << t << endl;
}
