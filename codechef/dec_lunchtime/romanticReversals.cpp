#include<bits/stdc++.h>
using namespace std;

string reverse(string &str, int len, int l, int r)
{
    if (l < 0 || r >= len || l > r)
        return str;
    while (l < r) {
        char c = str[l];
        str[l] = str[r];
        str[r] = c;
        l++;
        r--;
    }
}

string s;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		cin >> s;
		if (k > n)
			return -1;
		for(int i = k-1; i > -1; i--) {
			reverse(s, n, 0, i);
		}
		cout << s << endl;
	}
	return 0;
}
