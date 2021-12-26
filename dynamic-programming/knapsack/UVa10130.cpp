#include<bits/stdc++.h>
using namespace std;

#define MAX_N 1010
#define MAX_W 40

int i, T, G, ans, N, MW, V[MAX_N], W[MAX_N], memo[MAX_N][MAX_W];

int value(int id, int w) {
	if(id == N || w	== 0)
		return 0;
	if(memo[id][w] != -1) 
		return memo[id][w];
	if(W[id] > w) 
		return memo[id][w] = value(id+1, w);
	return memo[id][w] = max(value(id+1, w), V[id] + value(id+1, w-W[id]));
}

int main() {
	cin >> T;
	while(T--) {
		memset(memo, -1, sizeof memo);
		cin >> N;
		for(i = 0; i < N; i++)
			cin >> V[i] >> W[i];
		ans = 0;
		cin >> G;
		while(G--) {
			cin >> MW;
			ans += value(0, MW);
		}
		printf("%d\n", ans);
	}
	return 0;
}
