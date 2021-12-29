#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
 
void solve(void)
{
	int  n;
	cin >> n;
	string s;
	cin >> s;
	int idx = 1;
	for(int i = 1; i < n; i++) {
		if(i < n && ( s[i] < s[i-1] || (i > 1 && s[i] == s[i-1]))) {
			idx++;
		}
		else
			break;
	}
	for(int i = 0; i < idx; i++)
		cout << s[i];
	for(int i = idx-1; i >= 0; i--)
		cout << s[i];
	cout << "\n";
}
 
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--) solve();
	return 0;
}
