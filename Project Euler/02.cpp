#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n = 4e6;
	ll last = 2;
	ll lastSecond = 1;
	ll sum = 2;
	while(true) {
		ll temp = last;
		last = last + lastSecond;
		if(last > n)
			break;
		if(last % 2 == 0)
			sum += last;
		lastSecond = temp;
	}
	cout << sum << "\n";
	return 0;
}
