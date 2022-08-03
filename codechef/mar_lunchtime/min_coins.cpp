#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin >> x;
    if(x % 5 != 0) {
        cout << "-1\n";
        return ;
    }
    cout << (x / 10) + ((x % 10) / 5) << '\n';
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
