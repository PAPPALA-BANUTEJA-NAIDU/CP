#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int ones = 0, zeros = 0;
		for(int i = 0; i < n; i++) {
			if(s[i] == '0')
				zeros++;
			else
				ones++;
		}
		if(ones == zeros)
			cout << max(1, ones) - 1 << endl;
		else {
			cout << max(1, min(ones, zeros)) - 1<< endl;
		}
	}
	return 0;
}
