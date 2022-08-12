#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int count=0;

	for (int i = 1; i <= 500; i++) {		// A
		for (int j = 1; j <= i; j++) {	// B
			if ((i * i) == (j * j) + N) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}