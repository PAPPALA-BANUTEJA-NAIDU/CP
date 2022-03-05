#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    int a = 1;
    if(n == 1) {
        cout << 1 << "\n";
        return ;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cout << a;
            cout << " ";
        }

        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
