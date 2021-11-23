#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a = n % 10;
  int b = (n % 100) - a;
  int c = (n % 1000) - b - a;

  cout << a + (b / 10) + (c / 100) << endl;
}
