#include <iostream>
using namespace std;

// r = 1/(n - 1) * a - 1/(n * (n - 1)) * b²

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  int n;
  cin >> n;

  double x = 0.0;
  double a = 0.0;
  double b = 0.0;
  double r = 0.0;

  for (int i = 0; i < n; i++) {
    cin >> x;
    a += x * x;
    b += x;
  }

  r = 1.0/(n - 1.0) * a - 1.0/(n * (n - 1.0)) * b * b;

  cout << r << endl;
}
