#include <iostream>
using namespace std;

int main() {
	int n;
	int prev = 999999999;
	bool state = false;
	bool peak = false;
	
	while (not peak and cin >> n and n != 0) {
		if (not state and n > 3143 and  n > prev) state = true;
		else if (state and n < prev) peak = true;
		else state = false;
		prev = n;
	}
	
	if (peak) cout << "YES" << endl;
	else cout << "NO" << endl;
}


