#include <iostream>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  char x;
  int t = 0;

  for (int i = 0; i < r; ++i) {
    for (int j = 0; j < c; ++j) {
      cin >> x;
      if ((i + j) % 2 == 0) t += int(x) - int ('0');
    }
  }
  cout << t << endl;
}
