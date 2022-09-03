#include<iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	int min = INT_MAX;
	cin >> n;

	if (n == 2) {
		int num[2]={0,};
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}

		for (int i = 0; i < n; i++) {
			if (min > num[i]) {
				min = num[i];
			}
		}
		for (int j = 1; j <= min; j++) {
			if ((num[0] % j == 0) && (num[1] % j == 0)) {
				cout << j << endl;
			}
		}
	}
	else if (n == 3) {
		int num[3]={0,};
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}

		for (int i = 0; i < n; i++) {
			if (min > num[i]) {
				min = num[i];
			}
		}

		for (int j = 1; j <= min; j++) {
			if ((num[0] % j == 0) && (num[1] % j == 0) && (num[2] % j == 0)) {
				cout << j << endl;
			}
		}
	}
}