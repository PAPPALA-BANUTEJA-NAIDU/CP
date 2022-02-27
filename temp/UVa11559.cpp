#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, b, h, w, p, a;
    while(scanf("%d %d %d %d", &n, &b, &h, &w) == 4) {
        int min = b + 1;
        while(h--) {
            scanf("%d", &p);
            for(int i = 0; i < w; i++) {
                scanf("%d", &a);
                if(a >= n && n * p < min)
                    min = n * p;
            }
        }
        if(min == b + 1)
            puts("stay home");
        else
            printf("%d\n", min);
    }
    return 0;
}
