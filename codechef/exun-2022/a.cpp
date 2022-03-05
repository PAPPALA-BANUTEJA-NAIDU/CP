#include<bits/stdc++.h>
using namespace std;

void solve() {
    int m, x; 
    cin >> m >> x;
    cout << 1 << " ";
    for(int i = 2; i <= x; i++) {
        vector<int> v;
        int temp = m;
        for(int j = 1; j <= i; j++) 
            v.push_back(j);
        int size = i;
        for(int j = 0; j < i-1; j++) {
            if(temp > size) temp -= size;
            v.erase(v.begin() + temp - 1);
            size--;
            temp = m;
        }
        cout << v[0] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
