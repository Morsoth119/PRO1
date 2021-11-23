#include <iostream>
using namespace std;

// uppercase - lowercase difference = 32

int main() {
  char letter;

  cin >> letter;

  if ((int)letter < 91) {
    int lowercase = (int)letter + 32;
    cout << (char)lowercase << endl;
  }
  else if ((int)letter > 96) {
    int uppercase = (int)letter - 32;
    cout << (char)uppercase << endl;
  }
}
