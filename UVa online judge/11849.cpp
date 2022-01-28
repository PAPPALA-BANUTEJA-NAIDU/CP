#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m), n || m) {
        int temp;
        set<ll> st;
        for(int i = 0;i < n; i++) {
            cin >> temp;
            st.insert(temp);
        }
        ll both = 0;
        for(int i =0;i  < m; i++) {
            cin >> temp;
            if(st.find(temp) != st.end())
                both++;
        }
        cout << both << "\n";
    }
    return 0;
}
