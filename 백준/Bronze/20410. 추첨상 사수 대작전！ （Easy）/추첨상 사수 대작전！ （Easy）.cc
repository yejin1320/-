#include <iostream>

using namespace std;

int main() {
	int a, c, m, Seed, X1, X2;	//X1 = (a*Seed+c)%m, X2 = (a*X1+c)%m
	int ans=0;

	cin >> m >> Seed >> X1 >> X2;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (X1 == ((i * Seed) + j) % m && X2 == ((i * X1) + j) % m) {
				ans++;
				a = i;
				c = j;
				if (ans > 1) {
					break;
				}
				cout << a << " " << c << endl;
			}
		}
	}

	return 0;
}