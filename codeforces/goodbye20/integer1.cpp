#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		map<int, int> mp;
		int ans = 0;
		for(int i = 0; i < n; i++) {
			int a;
			cin >> a;
			a = abs(a);
			int limit = (a == 0 ? 1 : 2);
			if(mp[a] == limit) {
				continue;
			}
			mp[a]++;
			ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
