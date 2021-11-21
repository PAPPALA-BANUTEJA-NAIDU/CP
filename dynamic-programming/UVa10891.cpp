// Game of sum

#include<bits/stdc++.h>
using namespace std;

#define inf 999999
#define max(a, b) a > b ? a : b

int n;
int dp[105][105];
int a[105], sum[105];

int get_sum(int i, int j)
{
	return sum[j] - sum[i-1];
}

int solve(int l, int r)
{
	if (l > r)
		return 0;
	if(l == r)
		return a[l];
}
