#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, last=1, secondLast=0, temp;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("0");
        exit(0);
    }
    if (n >= 1) 
    {
        printf("0 1 ");
    }
    for (int i = 1; i <= n; i++) 
    {
        temp = secondLast;
        secondLast = last;
        last = temp + secondLast;
        if (last > n) break;
        printf("%d ", last);
    }
    return 0;
}
