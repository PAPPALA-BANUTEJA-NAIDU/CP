#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    int odd = 0, even = 0;
    int g = n % 10;
    while (n > 0) {
        ll temp = n % 10;
        n /= 10;
        if (temp % 2 == 0)
            even++;
        else
            odd++;

        if (g & 1) {
            if (odd >= 2) {
                cout << "YES\n";
                return;
            }
        } else {
            if (even >= 2) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
