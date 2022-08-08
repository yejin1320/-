#include <iostream>

using namespace std;

int main() {
	// N = A+B+C
	// C >= B+2
	// 0<A,B,C<N
	// A%2 == 0
	int N;
	cin >> N;
	int A, B, C;
	int count = 0;

	for (B = 1; B < N; B++) {
		for (C = B + 2; C < N; C++) {
			for (A = 2; A < N; A = A + 2) {
				if (N == A + B + C) {
					count++;
				}
			}
		}
	}
	cout << count;


	return 0;
}