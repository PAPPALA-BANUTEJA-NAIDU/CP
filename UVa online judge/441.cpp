#include<bits/stdc++.h>
using namespace std;

int k, a[13], ans[6];
void dfs(int idx, int i) {
		if(idx == 6){
			cout << ans[0];
			for(int i = 1; i < 6; i++) {
				printf(" %d", ans[i]);
			}
			cout << '\n';
			return ;
		}
		for(; i < k; i++) {
			ans[idx] = a[i];
			dfs(idx+1, i + 1);
		}
}

int main() {
	int first = 1;
	while(scanf("%d", &k) == 1 && k) {
		if(!first)
			cout << '\n';
		first = 0;
		for(int i = 0; i < k; i++) {
			cin >> a[i];
		}
		dfs(0, 0);
	}
	return 0;
}
