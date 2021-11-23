#include <iostream>
using namespace std;

// ...10 (cold) 10-30 (it's ok) 30... (hot)
// 100 (boil), 0 (freeze)

int main() {
  int temp;

  cin >> temp;

  if (temp < 10) {
    cout << "it's cold" << endl;
  }
  else if (temp > 30) {
    cout << "it's hot" << endl;
  }
  else {
    cout << "it's ok" << endl;
  }

  if (temp >= 100) {
    cout << "water would boil" << endl;
  }
  else if (temp <= 0) {
    cout << "water would freeze" << endl;
  }
}
