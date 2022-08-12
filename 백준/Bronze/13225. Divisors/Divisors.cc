#include <iostream>

using namespace std;

int main() {
	int C;
	cin >> C;
	int n;
	int count = 0;
	for (int i = 0; i < C; i++) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			if (n % j == 0) {
				count++;
			}
		}
		cout << n << " " << count << endl;
		count = 0;
	}
	return 0;
}