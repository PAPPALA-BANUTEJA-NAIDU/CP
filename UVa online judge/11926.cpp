#include<bits/stdc++.h>
using namespace std;

bitset<1000005> bs;
int n, m, s, e, r;
bool conflict;

bool check() {
    for(int i = s; i < e; i++) {
        if(bs[i]) return false;
        bs.set(i);
    }
    return true;
}

int main() {
    while(scanf("%d %d", &n, &m) == 2) {
        if(!n && !m)
            break;
        conflict = false;
        bs.reset();
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &s, &e);
            if(!conflict && !check()) conflict = true;
        }
        for(int i = 0; i < m; i++) {
            scanf("%d %d %d", &s, &e, &r);
            while(!conflict && s < 1000000) {
                if(!check()) conflict = true;
                s += r;
                e = min(e + r, 1000000);
            }
        }
        cout << (conflict ? "CONFLICT\n" : "NO CONFLICT\n");
    }
    return 0;
}
