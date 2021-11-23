#include <iostream>
using namespace std;

// A >> P >> V >> A

int main() {
  char p1, p2;

  cin >> p1 >> p2;

  if (p1 == 'A') {
    if (p2 == 'A') cout << "-" << endl;
    if (p2 == 'P') cout << "1" << endl;
    if (p2 == 'V') cout << "2" << endl;
  }
  if (p1 == 'P') {
    if (p2 == 'A') cout << "2" << endl;
    if (p2 == 'P') cout << "-" << endl;
    if (p2 == 'V') cout << "1" << endl;
  }
  if (p1 == 'V') {
    if (p2 == 'A') cout << "1" << endl;
    if (p2 == 'P') cout << "2" << endl;
    if (p2 == 'V') cout << "-" << endl;
  }
}
