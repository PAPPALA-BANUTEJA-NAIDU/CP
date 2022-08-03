#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int count = 0;
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int odd = 0,even=0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0)
            odd++;
        else 
            even++;
    }

    if ((odd == n and n % 2 == 1) or (odd == 1 and even > 0)) {
        cout << "-1\n";
    } else if (odd == 1 and even ==0) {
        cout << a[0] << '\n';
    }

    else if (odd >= 2) {
        if (odd & 1) {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 != 0) {
                    cout << a[i] << " ";
                    break;
                }
            }
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                    cout << a[i] << " ";
            }
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 != 0) {
                    count = 1;
                    if (count > 0) {
                        cout << a[i] << " ";
                    }
                }
            }
        } else {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0)
                    cout << a[i] << " ";
            }
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 != 0)
                    cout << a[i] << " ";
            }
        }
        cout << '\n';
    } else {
        cout << "-1\n";
    }
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
