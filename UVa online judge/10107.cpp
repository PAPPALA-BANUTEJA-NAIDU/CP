#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, tmp, n = -1;
    int A[10001];
    while(scanf("%d", &tmp) == 1) {
        for(i = n; i >= 0; i--) {
            if(A[i] > tmp)
                A[i+1] = A[i];
            else
                break;
        }
        A[i+1] = tmp;
        n++;
        if(n & 1)
            printf("%d\n", (A[n/2] + A[n/2+1]) / 2);
        else
            printf("%d\n", A[n/2]);
    }
    return 0;
}
