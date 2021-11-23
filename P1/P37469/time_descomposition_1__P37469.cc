#include <iostream>
using namespace std;

int main() {
  int h, min, s;

  cin >> s;

  min = s / 60;
  s = s % 60;
  h = min / 60;
  min %= 60;

  cout << h << " " << min << " " << s << endl;
}
