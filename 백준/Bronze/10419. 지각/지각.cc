#include <iostream>

using namespace std;

int main() {
	//int t, s;	// 지각시간, 일찍마쳐주는시간. s = t^2
	int T;		// 테스트케이스
	int d;		//	수업시간.
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> d;
		int t = 0;
		while (1) {
			if ((t + 1) + ((t + 1) * (t + 1)) <= d) {
				t++;
			}
			else
				break;
		}
		cout << t << endl;
	}

	return 0;
}