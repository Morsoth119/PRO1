#include <iostream>
using namespace std;

int main() {
  int a = 0;
  int b = 0;
  int n;
  int c = 1;

  while (cin >> n) {
    if (c % 2 == 1) {
      a = n;
      c++;
    }
    else {
      b = n;
      int x = 0;
      for (int i = a; i <= b; i++) {
        x += i * i * i;
      }
      c++;
      cout << "suma dels cubs entre " << a << " i " << b << ": " << x << endl;
    }
  }
}
