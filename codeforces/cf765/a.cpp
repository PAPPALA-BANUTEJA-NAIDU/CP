#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll Mx = 2e5 + 5;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, l;
        cin >> n >> l;
        vector<int> bit(31);
        for(int i = 0 ; i < n; i++) {
            int x;
            cin >> x;
            for(int j = 0; j < 31; j++) {
                if(x & (1ll << j)) bit[j]++;
            }
        }
        int ans = 0;
        for(int i = 0; i < 31; i++) {
            if(bit[i] > n/2)
                ans += (1ll << i);
        }
        cout << ans << "\n";
    }
}
