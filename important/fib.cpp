#include<bits/stdc++.h>
using namespace std;

const int sz = 2;
const int MOD = 1e9 + 7;
#define int long long

struct Mat {
	int m[sz][sz];
	Mat() {
		memset(m, 0, sizeof(m));
	}
	void identity() {
		for(int i = 0;i < sz; i++) 
			m[i][i] = 1;
	}

	void setvalues() {
		m[0][0] = m[0][1] = m[1][0] = 1;
	}

	Mat operator * (Mat a) {
		Mat res ;
		for(int i =0; i < sz; i++) {
			for(int j = 0; j < sz; j++) {
				for(int k = 0; k < sz; k++) {
					res.m[i][j] += m[i][k] * a.m[k][j];
					res.m[i][j] %= MOD;
				}
			}
		}
		return res;
	}
};

int fibo(int n) {
	Mat res;
	res.identity();
	Mat t;
	t.setvalues();
	n -= 2;
	while(n) {
		if(n & 1) res = res * t;
		t = t * t;
		n /= 2;
	}

	return (res.m[0][0] + res.m[0][1]) % MOD;
}

int32_t main() {
	auto s = clock();

	int n;
	cin >> n;

	cout << fibo(n) << '\n';
	auto end = clock();
	cout << "Time: "<< end - s << '\n';
	return 0;
}
