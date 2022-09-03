#include <iostream>
using namespace std;

int main()
{
	int N,M=0,temp;
	int count = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		temp = i + (i/1000000) + ((i%1000000)/100000) + ((i%100000)/10000) + ((i%10000)/1000) + ((i%1000)/100) + ((i%100)/10) + (i%10);
		if (temp == N) {
			M = i;
			count = 1;
			cout << M;
			break;
		}
	}
	if (count == 0) {
		cout << 0;
	}
}