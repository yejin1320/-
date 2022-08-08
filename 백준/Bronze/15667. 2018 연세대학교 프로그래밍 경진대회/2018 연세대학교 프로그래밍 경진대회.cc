#include <iostream>

using namespace std;

int main() {
	int N;	//N = 1+K+(K*K)
	int K;
	cin >> N;

	for (int i = 1; i <= 100; i++) {
		if (i + (i * i) == N - 1) {
			K = i;
		}
	}
	cout << K;
	return 0;
}