#include<bits/stdc++.h>
using namespace std;

#define int long long 
int powr(int a, int b) {
	int res = 1;
	for(int i = 0; i < b; i++) {
		res *= a;
	}
	return res;
}

int32_t main() {
	auto s = clock();
	int a, b;
	cin >> a >> b;
	cout << powr(a, b) << '\n';
	auto end = clock();
	cout << "Time: "<< end - s << '\n';
	return 0;
}
