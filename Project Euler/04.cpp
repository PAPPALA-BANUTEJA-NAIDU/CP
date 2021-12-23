#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll makePalindrome(ll n) {
	ll result = n * 1000;
	result += n / 100;
	result += ((n / 10) % 10) * 10;
	result += (n % 10) * 100;
	return result;
}

int main() {
	ll _max = 1000000;

	bool found = false;
	for(auto upper = _max / 1000; upper >= 100 & !found; upper--) {
		ll palindrome = makePalindrome(upper);

		if(palindrome > _max)
			continue;
	
		for(ll i = 100; i * i <= palindrome; i++) {
			if(palindrome % i == 0) {
				ll otherFactor = palindrome / i;

				if(otherFactor < 100 || otherFactor > 999)
					continue;	

				cout << palindrome << "\n";
				found = true;
				break;
			}
		}
	}

	return 0;
}
