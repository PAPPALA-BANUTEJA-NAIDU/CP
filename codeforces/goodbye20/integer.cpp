#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
void solve(void)
{
	int  n;
	int ans = 1;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a[i] = temp;
	}
	sort(a, a+n);
	for(int i = 1; i < n; i++) {
		if(a[i-1] == a[i])
			a[i-1] *= -1;
	}
	sort(a, a+n);
	for(int i = 1; i < n; i++) {
		if(a[i-1] != a[i])
			ans += 1;
	}
	printf("%d\n",ans);
}
 
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--) solve();
	return 0;
}
