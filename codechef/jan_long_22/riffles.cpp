#include<bits/stdc++.h>
using namespace std;

const int MX = 300005;

int a[MX];

int main() {
    int t, n, k, st, rep;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if(n == 2) {
            cout << 1 << ' ' << 2 << endl;
            continue;
        }
        st = 1, rep = 0;
        a[rep] = 1;
        do {
            st *= 2;
            if( st > n ) 
                st = st - n + 1;
            rep++;
            a[rep] = st;
        } while( st != n );
        k %= rep;
        cout << 1;
        int ans = 1;
        for(int i = 1; i < n; i++) {
            ans = ans + a[k];
            if(ans > n) ans = ans - n + 1;
            cout << " " << ans;
        }
        cout << endl;
    }
}
