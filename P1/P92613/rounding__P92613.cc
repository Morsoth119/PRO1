#include <iostream>
using namespace std;

int main() {
  double num;

  cin >> num;

  int floor_num = (int)num;

  cout << floor_num << " ";

  if (floor_num != num) {
    cout << floor_num + 1 << " ";
  }
  else {
    cout << floor_num << " ";
  }

  if (floor_num + 0.5 > num) {
    cout << floor_num << endl;
  }
  else if (floor_num + 0.5 <= num) {
    cout << floor_num + 1 << endl;
  }
}
