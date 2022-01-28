#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main( ){
    int n, m, x, i, temp;
    while(scanf("%d", &n) == 1 && n) {
        multiset<int> S;
        multiset<int>::iterator it, jt, kt;
        ll sum = 0;

        for(int i = 0;i  < n; i++) {
            scanf("%d", &m);
            while(m--) {
                cin >> x;
                S.insert(x);
            }
            it = S.begin(), jt = S.end();
            jt--;
            sum += *jt - *it;
            S.erase(it), S.erase(jt);
        }
        cout << sum << '\n';
    }
    return 0;
}
