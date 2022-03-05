#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isprime(ll x) {
    for(ll i = 2; i * i <= x; i++) {
        if(x % i == 0) 
            return false;
    }
    return true;
}

ll MOD = 1e7;
int main() {
    int t;
    cin >> t ;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0 ; i < n; i++) 
            cin >> v[i];
        ll sum = 0;
        for(int i = 0 ; i < n; i++) 
            sum += v[i];
        if(isprime(sum)) {
            ll mn = MOD;
            for(ll i = 0 ; i < n; i++) {
                if(v[i] & 1)
                    mn = min(mn, v[i]);
            }
            cout << n-1 << '\n';
            for(int i = 0 ; i < n; i++) {
                if(v[i] == mn)
                    continue;
                cout << i + 1 << " ";
            }
        }
        else {
            cout << n << '\n';
            for(int i = 0; i < n ; i++) {
                cout << i + 1 << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
