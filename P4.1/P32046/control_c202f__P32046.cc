#include <iostream>
using namespace std;

int main() {
  int n, m, o;
  cin >> n;
  o = n % 1000;
  int total = 0;

  cout << "nombres que acaben igual que " << n << ":" << endl;
  while (cin >> m) {
    if (m % 1000 == o) {
      ++total;
      cout << m << endl;
    }
  }

  cout << "total: " << total << endl;
}
