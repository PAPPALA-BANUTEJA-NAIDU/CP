#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
const int N = 5e5 + 10;
const int mod = 998244353;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) 
            cin >> a[i];
        set<ll> not_used;
        for(int i = 1; i <= n; i++)
            not_used.insert(i);
        bool flag = true;
        sort(a.begin(), a.end());
        for(ll x: a) {
            if(not_used.find(x) != not_used.end()) {
                not_used.erase(x);
            }
            else {
                while(!not_used.count(x) && x >= 1) {
                    x /= 2;
                }
                if(x > n || x < 1) {
                    flag = false;
                    break;
                }
                not_used.erase(x);
            }
        }
        if(flag && not_used.empty()) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
