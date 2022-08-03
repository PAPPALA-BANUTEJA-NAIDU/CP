#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin>> s;
    vector<ll> l(c), r(c);
    vector<ll> len(c+1);

    len[0] = n;
    for(int i = 0; i < c; i++) {
        cin >> l[i] >> r[i];
        len[i+1] = len[i] + (r[i] - l[i] + 1);
    }

    while(q--) {
        ll k;
        cin >> k;
        assert(k <= len[c]);
        for(int i = c - 1; i >= 0; i--) {
            if(k > len[i])
                k = l[i] + (k - len[i] - 1);
        }
        assert(k <= n);
        cout << s[k-1] << '\n';
    }

}

int main()  {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
