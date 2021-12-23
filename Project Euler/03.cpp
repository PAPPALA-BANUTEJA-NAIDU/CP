#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long long

int main() {
	ul n = 600851475143;

	for(ul i = 2; i * i <= n; i++)
		while(n % i == 0 && n != i)
			n /= i;

	cout << n << endl;
	return 0;
}
