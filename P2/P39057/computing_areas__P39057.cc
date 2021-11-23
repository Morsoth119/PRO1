#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x;                  //number of displayed shapes
  cin >> x;

  double pi = M_PI;       //constante pi

  string shape;            //shape (rectangle or circle)
  double h;                //rectangle's height
  double w;               //rectangle's width
  double r;               //circle's radius

  cout << fixed;
  cout.precision(6);

  for (int i = 0; i < x; i++) {
    cin >> shape;
    if (shape == "rectangle") {
      cin >> h >> w;
      cout << h * w << endl;
    }
    else if (shape == "circle") {
      cin >> r;
      cout << pi * pow(r, 2) << endl;
    }
  }
}
