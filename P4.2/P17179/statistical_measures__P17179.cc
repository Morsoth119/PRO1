#include <iostream>
using namespace std;

int main() {
	cout << fixed;
	cout.precision(4);
	
	int n;
	cin >> n;
	int m;
	double x, min = 0.0, max = 0.0;
	
	for (int i = 0; i < n; ++i) {
		cin >> m;
		double avg = 0.0;
		for (int j = 0; j < m; ++j) {
			cin >> x;
			if (j == 0) {
				max = x;
				min = x;
			}
			else {
				if (x > max) max = x;
				else if (x < min) min = x;
			}
			avg += x;
		}
		avg /= double(m);
		cout << min << " " << max << " " << avg << endl;
	}
}

