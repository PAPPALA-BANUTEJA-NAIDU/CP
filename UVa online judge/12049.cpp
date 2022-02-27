#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, temp;
    map<int, int> mp;
    map<int, int>::iterator it;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        for(int i = 0; i < n; i++) {
            scanf("%d", &temp);
            mp[temp]++;
        }
        for(int i = 0; i < m; i++) {
            scanf("%d", &temp);
            mp[temp]--;
        }

        int ans = 0;
        for(it = mp.begin(); it != mp.end(); it++) {
            ans += (abs(it->second));
        }
        printf("%d\n", ans);
        mp.clear();
    }
    return 0;
}
