#include<bits/stdc++.h>
using namespace std;

int main() {
	int f, r;
	while(scanf("%d", &f), f) {
		scanf("%d", &r);
		int a[f], b[r], counter=0;
		for(int i = 0;i < f; i++) {
			cin >> a[i];
		}
		for(int i = 0;i < r; i++) {
			cin >> b[i];
		}
		double ratio[f * r], ans = -1.0;
		for(int i =0;i < f; i++) {
			for(int j = 0; j < r; j++) {
				ratio[counter++] = (double) b[j]/ a[i];
			}
		}
		sort(ratio, ratio + counter);
		for(int i = 0; i < counter - 1; i++) {
			ans = max(ans, ratio[i+1] / ratio[i]);
		}
		printf("%.2f\n", ans);
	}
	return 0;
}
