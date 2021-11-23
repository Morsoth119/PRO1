#include <iostream>
using namespace std;

/*
multiple of 4 that do not end with 2 zeros
years with 2 zeros such as: 2000 --> 20 / 4 = 5
1800 and 1900 were not lap years
2000 was a leap year
*/

int main() {
  int y;

  cin >> y;

  if (y % 400 == 0) cout << "YES" << endl;
  else if (y % 100 == 0) cout << "NO" << endl;
  else if (y % 4 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}
