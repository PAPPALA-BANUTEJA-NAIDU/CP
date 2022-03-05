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
        int a, b, c;
        cin >> a >> b >> c;
        ll d = b - (c - b);
        if(d > 0 && d % a == 0) {
            cout << "YES" << "\n";
            continue;
        }
        if((a + c) % 2 == 0) {
            d = (a + c) / 2;
            if(d > 0 && d % b == 0) {
                cout << "YES" << "\n";
                continue;
            }
        }
        d = b + (b - a);
        if(d > 0 && d % c == 0) {
            cout << "YES" << "\n";
            continue;
        }
        cout << "NO" << "\n";
    }
    return 0;
}
