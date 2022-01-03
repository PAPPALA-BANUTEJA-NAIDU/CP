#include<bits/stdc++.h>
using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;
	if(k > (n+1) / 2) {
		cout << -1 << "\n";
		return;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << (i == j && i % 2 == 0 && i < 2 * k ? 'R' : '.');
		}
		cout << "\n";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
