#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int a[2 * n];
    for(int i = 0; i < 2 * n ; i++) {
        cin >> a[i];
    }
    sort(a, a+2*n) ;
    bool ok = true;
    for(int i = 0; i < n; i++) {
        if(a[n+i] < a[i] + x)
            ok = false;
    }
    cout << (ok ? "YES\n" : "NO\n");

}

int main()  {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
