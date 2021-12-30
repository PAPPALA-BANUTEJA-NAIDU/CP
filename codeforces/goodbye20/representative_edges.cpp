#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		int ans = n - 1;
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				int A = a[j] - a[i];
				int B = j - i;
				int C = A*i - B * a[i];
				int temp=0;
				for(int k = 0; k < n; k++) {
					int num = A * k - C;
					int den = B;
					if(num != den * a[k]) 
						curr++;
				}
				ans = min(ans, curr);
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
