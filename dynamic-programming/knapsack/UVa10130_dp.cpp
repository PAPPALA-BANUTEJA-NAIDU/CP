#include<bits/stdc++.h>
using namespace std;

#define MAX_N 1010
#define MAX_W 40

int i, T, G, ans, N, MW, V[MAX_N], W[MAX_N], dp[MAX_N][MAX_W], w;

int main() {
	cin >> T;
	while(T--) {
		cin >> N;
		for(i = 0; i < N; i++)
			cin >> V[i] >> W[i];
		ans = 0;
		cin >> G;
		while(G--) {
			cin >> MW;

			for(i = 0; i <= N; i++)
				dp[i][0] = 0;
			for(w = 0; w <= MW; w++) 
				dp[0][w] = 0;

			for(int i = 1; i <= N; i++) {
				for(int w = 1; w <= MW; w++) {
					if(W[i-1] > w)
						dp[i][w] = dp[i-1][w];
					else 
						dp[i][w] = max(dp[i-1][w], V[i-1] + dp[i-1][w-W[i-1]]);
				}
			}
			ans += dp[N][MW];
		}
		printf("%d\n", ans);
	}
	return 0;
}
