#include <iostream>
using namespace std;

int main() {
  char txt;

  int n = 0;

  while (cin >> txt) {
    if (txt == '.') break; //cuando pones un punto y clickas enter rompe el loop
    if (txt == 'a') ++n;
  }

  cout << n << endl;
}
