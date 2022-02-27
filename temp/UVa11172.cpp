#include<bits/stdc++.h>
using namespace std;

int main() {
    int T, x, y;
    cin>> T;
    while(T--) {
        scanf("%d %d", &x, &y);
        if(x < y) puts("<");
        else if(x > y) puts(">");
        else
            puts("=");
    }
    return 0;
}
