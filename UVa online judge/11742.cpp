#include<bits/stdc++.h>
using namespace std;

int a[22], b[22], c[22], p[10], n, m;
bool accepted() {
    for(int i = 0; i < m; i++) {
        if(c[i] > 0 && abs(p[a[i]] - p[b[i]]) > c[i])
            return false;
        if(c[i] < 0 && abs(p[a[i]] - p[b[i]]) < -c[i])
            return false;
    }
    return true;
}

int main() {
    while(scanf("%d %d", &n, &m), n || m) {
        for(int i = 0; i < m; i++) {
            scanf("%d %d %d", a+i, b+i, c+i);
        }
        for(int i = 0; i< n; i++) {
            p[i] = i;
        }

        int res = 0;
        do {
            if(accepted()) res++;
        } while(next_permutation(p, p+n));
        printf("%d\n", res);
    }
    return 0;
}
