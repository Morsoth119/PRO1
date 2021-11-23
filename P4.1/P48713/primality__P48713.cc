#include <iostream>
using namespace std;

int main() {
  int n; //number of numbers we want to check
  cin >> n;

  //loop to read and evaluate if it is prime
  for (int i = 0; i < n; i++) {
    int x; //number to evaluate
    cin >> x;
    int divisor = 2; //minimum divisor of a prime number
    bool is_prime = (x != 1 and x != 0); //if x is not 1 or 0 x is prime

    //loop to evaluate if x is actually a prime number
    //while x do not have a divisor and divisor² <= x
    while (is_prime and divisor * divisor <= x) {
      is_prime = x % divisor != 0; //if x is not divisible stays true
      divisor = divisor + 1; //check the next divisor
    }

    if (is_prime) cout << x << " is prime" << endl;
    else cout << x << " is not prime" << endl;
  }
}
