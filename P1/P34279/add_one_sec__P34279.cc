#include <iostream>
using namespace std;

int main() {
  int h, min, s;

  cin >> h >> min >> s;

  s = s + 1;

  if (s >= 60) {
    min = min + (s / 60);
    s = s % 60;
  }
  if (min >= 60) {
    h = h + (min / 60);
    min = min % 60;
  }
  if (h >= 24) {
    s = 0;
    min = 0;
    h = 0;
  }

  if (h < 10 && min < 10 && s < 10) {
    cout << "0" << h << ":" << "0" << min << ":" << "0" << s << endl;
  }
  else if (h < 10 && min < 10) {
    cout << "0" << h << ":" << "0" << min << ":" << s << endl;
  }
  else if (h < 10 && s < 10) {
    cout << "0" << h << ":" << min << ":" << "0" << s << endl;
  }
  else if (min < 10 && s < 10) {
    cout << h << ":" << "0" << min << ":" << "0" << s << endl;
  }
  else if (h < 10) {
    cout << "0" << h << ":" << min << ":" << s << endl;
  }
  else if (min < 10) {
    cout << h << ":" << "0" << min << ":" << s << endl;
  }
  else if (s < 10) {
    cout << h << ":" << min << ":" << "0" << s << endl;
  }
  else {
    cout << h << ":" << min << ":" << s << endl;
  }
}
