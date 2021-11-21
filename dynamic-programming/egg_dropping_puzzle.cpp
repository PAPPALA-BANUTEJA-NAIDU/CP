// minimum number of drops needed to find a floor from which it is safe to drop an egg without breaking it.

#include<bits/stdc++.h>
using namespace std;

#define MAX_EGGS 100
#define MAX_FLOORS 100
#define INF 1000000000

int memo[MAX_EGGS][MAX_FLOORS];

// n eggs, k floors
int eggDrops(int n, int k)
{
	if (k == 0)
		return 0;
	if (k == 1)
		return 1;
	if (n == 1)
		return k;

	if(memo[n][k] > -1) 
		return memo[n][k];

	int ans = INF;
	for(int i = 1; i <= k; ++i)
	{
		ans = min(ans, max(eggDrops(n-1, i-1), eggDrops(n, k-i)));
	}
	return memo[n][k] = ans + 1;
}

int main()
{
	memset(memo, -1, sizeof memo);

	cout << eggDrops(2, 100) << endl;
	cout << eggDrops(10, 5) << endl;
	cout << eggDrops(10, 100) << endl;
	return 0;
}
