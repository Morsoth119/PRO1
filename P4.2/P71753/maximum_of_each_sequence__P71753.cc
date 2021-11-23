#include <iostream>
using namespace std;

int main() {
	int n, m;
	
	while (cin >> n) {
		int max = -2000000000;
		for (int i = 0; i < n; ++i) {
			cin >> m;
			if (m > max) max = m;
		}
		cout << max << endl;
	}
}



