#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
	while (a) {
		ll temp = a;
		a = b % a;
		b = temp;
	}
	return b;
}

ll lcm(ll a, ll b) {
	return a * (b / gcd(a, b));
}

int main() {
	int n;

	ll result = 1;
	for(int i = 2; i < 21; i++) {
		result = lcm(result, i);
	}

	cout << result << endl;
	return 0;
}
