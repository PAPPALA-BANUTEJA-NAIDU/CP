#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	ll sum = 0;
	for(int i = 0; i < n; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	cout << sum << "\n";
	return 0;
}
