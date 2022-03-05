#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string T = s;
        m = min(n, m);
        for(int z = 0; z < m; z++) {
            for(int i = 0; i < n; i++) {
                if(s[i] == '1')
                    T[i] = '1';
                else {
                    T[i] = '0' ^ (i > 0 ? s[i-1] : '0') ^ (i < n-1 ? s[i+1] : '0');
                }
            }
            swap(T, s);
        }
        cout << s << "\n";

    }
    return 0;
}
