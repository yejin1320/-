#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	int a, b, temp;	// a*b=B, a+b=-2A
	for (int i = -100; i <= 100; i++) {
		for (int j = i; j <= 100; j++) {
			if ((i * j) == B && (i + j) == (-2 * A)) {
				a = i;
				b = j;
				if (a > b) {
					temp = a;
					a = b;
					b = temp;
				}
				if (a == b) {
					cout << a;
				}
				else {
					cout << a << " " << b;
				}
			}
		}
	}

	

	return 0;
}