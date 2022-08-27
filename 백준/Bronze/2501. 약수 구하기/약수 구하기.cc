#include <iostream>

using namespace std;

int main() {
	int N, K;
	int count=0;
	cin >> N >> K;
	int i=1;

	while (i <= N) {
		if (N % i == 0) {
			count++;
		}
		if (count == K) {
			cout << i;
			break;
		}
		else {
			i++;
			continue;
		}
	}
	if (count < K) {
		cout << 0;
	}

	return 0;
}