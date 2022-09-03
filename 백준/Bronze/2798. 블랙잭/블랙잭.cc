#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int card[100] = {};
	int sum = 0;	//sum은 M보다 작으며 M과 최대한 가까워야한다.
	for (int i = 0; i < N; i++) {
		cin >> card[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {
				int temp = card[i] + card[j] + card[k];
				if (temp <= M && temp>sum) {
					sum = temp;
				}
			}
		}
	}
	cout << sum;
}