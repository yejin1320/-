#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	int A=1, B, N;
	int An;
	int gap;
	int abs;
	while (1) {
		cin >> B >> N;
		if (B == 0 && N == 0) {
			break;
		}
		else {
			gap = INT_MAX;
			for (int i = 1; i <= B; i++) {
				An = pow(i, N);
				abs = B - An;
				if (abs < 0) {
					abs = -abs;
				}
				if (gap > abs) {
					gap = abs;
					A = i;
				}
			}
			cout << A << endl;
		}
	}
	return 0;
}