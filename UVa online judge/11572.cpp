#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        map<int, int> mp;
        int n;
        cin >> n;
        int len = 0, repeated=0, seen, ans = 0;
        for(int i = 1; i <= n; i++) {
            int f;
            cin >> f;
            seen = mp[f];
            if(seen) {
                repeated = max(repeated, seen);
                len = i - repeated - 1;
            }
            ++len;
            mp[f] = i;
            ans = max(ans, len);
        }
        cout << ans << '\n';
    }
    return 0;
}
