#include <iostream>
using namespace std;

int main() {
  string p;

  int count = 0;
  int state = 0;

  while (state < 2 and cin >> p) {
    if (p == "beginning" and state == 0) state = 1;
    else if (p == "end" and state == 1) state = 2;
    else if (p == "end") state = 3;
    else {
      if (state == 1) ++count;
    }
  }

  if (state == 2) cout << count << endl;
  else cout << "wrong sequence" << endl;
}
