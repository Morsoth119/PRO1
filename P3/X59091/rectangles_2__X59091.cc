#include <iostream>
using namespace std;

int main() {
  int n, m;
  bool hastalapolla = false;

  while (cin >> n >> m) {
    int a = 9;
    if (hastalapolla) cout << endl;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        cout << a;
        if (a == 0) a = 9;
        else --a;
      }
      hastalapolla = true;
      cout << endl;
    }
  }
}
