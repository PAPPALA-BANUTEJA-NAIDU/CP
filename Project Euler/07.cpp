#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n = 200000;
	vector<bool> is_prime(n+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i] && (long long)i * i <= n) {
			for (int j = i * i; j <= n; j += i)
				is_prime[j] = false;
		}
	}


	ll count = 0;
	for(int i = 1; i < 200001; i++) {
		if(is_prime[i] == 1) {
			count += 1;
			if(count == 10001) {
				cout << i << endl;
			}
		}
	}
	//cout << count << endl;
	return 0;
}
