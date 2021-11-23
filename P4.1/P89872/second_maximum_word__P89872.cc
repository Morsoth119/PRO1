#include <iostream>
using namespace std;

int main() {
  string word;
  string w1 = "";
  string w2 = "";

  while (cin >> word) {
    if (word > w1) {
      w2 = w1;
      w1 = word;
    }
    else if (word > w2 and word != w1) {
      w2 = word;
    }
  }

  cout << w2 << endl;
}
