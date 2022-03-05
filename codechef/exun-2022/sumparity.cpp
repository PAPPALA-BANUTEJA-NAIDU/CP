
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, a; 
    cin >> n >> a;
    if(n == 1) {
        cout << (a % 2 == 0 ? "Even" : "Odd") << "\n";
        return ;
    }
    if(a % 2 != 0) {
        if(n % 2 == 0)
            cout << "Even" << "\n";
        else
         cout << "Odd" << "\n";
        return ;
    }
    cout << "Impossible" << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
