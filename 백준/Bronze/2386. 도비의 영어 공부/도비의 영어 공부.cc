#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string s;
	while (true) {
		int count = 0;
		getline(cin, s);
		if (s == "#") {
			break;
		}
		for (int i = 2; i < s.length(); i++) {
			if ((s[0] == s[i]) || (s[0] == (s[i] + 32))) {
				count++;
			}
		}
		cout << s[0] << " " << count << endl;
	}
}