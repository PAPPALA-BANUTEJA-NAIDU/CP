#include<bits/stdc++.h>
using namespace std;

#define int long long
int mul(int a, int b) {
	int res = 0;
	while(b) {
		if(b & 1) res += a;
		a *= 2;
		b /= 2;
	}	
	return res;
}

int32_t main() {
	auto s = clock();
	int a, b;
	cin >> a >> b;
	cout << mul(a, b) << '\n';
	auto end = clock();
	cout << "Time: "<< end - s << '\n';
	return 0;
}
