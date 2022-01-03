#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve() {
	int n;
	cin >> n;
	vector<int> l(n), r(n);
	vector<ll> c(n);
	for(int i = 0; i < n; i++) 
		cin >> l[i] >> r[i] >> c[i];

	const ll inf = (ll) 1e18;
	ll minL = inf, minR = inf, minLR = inf;
	int L = (int) 1e9 + 1;
	int R = -1;
	for(int i = 0; i < n; i++) {
		if(l[i] < L) {
			minL = inf;
			minLR = inf;
			L = l[i];
		}
		if(r[i] > R) {
			minR = inf;
			minLR = inf;
			R = r[i];
		}
		if(l[i] == L)
			minL = min(minL, c[i]);
		if(r[i] == R)
			minR = min(minR, c[i]);
		if(l[i] == L && r[i] == R)
			minLR = min(minLR, c[i]);
		cout << min(minL + minR, minLR) << "\n";
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
