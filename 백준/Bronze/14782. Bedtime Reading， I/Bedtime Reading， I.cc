#include <iostream>

using namespace std;

int main() {
	int I,sum=0;
	cin >> I;
	for (int i = 1; i <= I; i++) {
		if (I % i == 0) {
			sum += i;
		}
	}
	cout << sum;
	return 0;
}