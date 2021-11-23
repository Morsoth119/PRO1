#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;

  int r = 0;

  for (int i = 1; i <= n; i++) {
    r += pow(i, 2);
  }
  cout << r << endl;
}
