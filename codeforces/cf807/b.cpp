#include<bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = 0;
    ll ans = 0;
    for(int i = n-2; i >= 0; i--) {
        if(a[i] == 0) {
            k += 1;
        }
        else {
            ans += k;
            k = 0;
        }
    }

    ans += accumulate(a, a+n-1, 0LL);
    cout << ans << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}

