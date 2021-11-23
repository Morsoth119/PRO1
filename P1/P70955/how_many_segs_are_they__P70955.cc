#include <iostream>
using namespace std;

int main() {
  int y, d, h, min, s;

  cin >> y >> d >> h >> min >> s;

  d = d + y * 365;
  h = h + d * 24;
  min = min + h * 60;
  s = s + min * 60;

  cout << s << endl;
}
