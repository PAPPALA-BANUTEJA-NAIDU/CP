#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >>n;
		int v[n];
		for(int i = 0; i < n; i++) 
			cin >> v[i];
		int res = 0, count = 0;
		for(int i = 1; i < n; i++) {
			int temp = v[i];
			count = 0;
			for(int j = 0; j < i; j++) {
				if(temp >= v[j])
					count++;
			}
			res += count;
		}
		cout << res << "\n";
	}
	return 0;
}
