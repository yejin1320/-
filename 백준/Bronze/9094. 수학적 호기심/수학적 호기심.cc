#include <iostream>

using namespace std;

int main() {
	int n, m;
	int T;
	int count;
	double num;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n >> m;
		count = 0;
		for (int a = 0; a < n; a++) {
			for (int b = a + 1; b < n; b++) {
				num = static_cast<double>((a * a) + (b * b) + m) / (a * b);
				if (num - (int)num == 0) {
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}