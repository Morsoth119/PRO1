#include <iostream>
using namespace std;

int main() {
  char letter;
  int id;

  cin >> letter;

  id = (int)letter;

  if (id == 65 || id == 69 || id == 73 || id == 79 || id == 85) {
    cout << "uppercase" << endl << "vowel" << endl;
  }
  else if (id == 97 || id == 101 || id == 105 || id == 111 || id == 117) {
    cout << "lowercase" << endl << "vowel" << endl;
  }
  else if (id < 91) {
    cout << "uppercase" << endl << "consonant" << endl;
  }
  else if (id > 96) {
    cout << "lowercase" << endl << "consonant" << endl;
  }
}
