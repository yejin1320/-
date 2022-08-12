#include <iostream>

using namespace std;

int main() {
	// a : 양 한마리가 먹는 사료의 양
	// b : 염소 한마리가 먹는 사료의 양
	// n : 양+염소
	// w : 하루동안 소비한 전체 사료의 양
	int a, b, n, w;
	int x,y,h=0;
	cin >> a >> b >> n >> w;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (i + j == n) {
				if ((a * i) + (b * j) == w) {
					h++;
					if (h == 1) {
						x = i;
						y = j;
					}
				}
			}
		}
	}
	if (h == 1) {
		cout << x << " " << y << endl;
	}
	else {
		cout << "-1" << endl;
	}


	return 0;
}