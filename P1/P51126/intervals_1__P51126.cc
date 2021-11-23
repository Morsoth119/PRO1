#include <iostream>
using namespace std;

int main() {
  int a1, b1, a2, b2;
  int min = 0;
  int max = 0;

  cin >> a1 >> b1 >> a2 >> b2;

  if (a1 <= b2 && a2 <= b1) {
    if (a1 <= a2) {
      min = a2;
    }
    else if (a2 < a1) {
      min = a1;
    }
    if (b1 <= b2) {
      max = b1;
    }
    else if (b2 < b1) {
      max = b2;
    }

    cout << "[" << min << "," << max << "]" << endl;
  }
  else {
    cout << "[]" << endl;
  }
}
