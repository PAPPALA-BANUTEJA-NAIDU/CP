#include<bits/stdc++.h>
using namespace std;

int a[1005], b[30], cc = 0;
int main() {
	int n, m;
	while(scanf("%d", &n), n) {
		printf("Case %d:\n", ++cc);
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		scanf("%d", &m);
		int ans = a[0] + a[1];
		while(m--) {
			int curr, query;
			cin >> query;
			for(int i = 0; i < n; i++) {
				for(int j = i+1; j < n; j++) {
					curr = a[i] + a[j];
					if(abs(ans - query) > abs(curr - query))
						ans = curr;
				}
			}
			printf("Closest sum to %d is %d.\n", query, ans); 
		}
	}
	return 0;
}
