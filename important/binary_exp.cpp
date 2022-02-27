#include<bits/stdc++.h>
using namespace std;

#define int long long
int powr(int a, int b) {
	int res = 1;
	while(b) {
		if(b & 1) res *= a;
		a *= a;
		b /= 2;
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
