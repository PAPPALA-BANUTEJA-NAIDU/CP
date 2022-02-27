#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, temp, a, b, c;
    int Case = 0;
    cin>> t;
    while(t--) {
        scanf("%d %d %d", &a, &b, &c);
        if(a > b) 
            temp = a, a = b, b = temp;
        if(a > c) 
            temp = a, a = c, c = temp;
        if(b > c) 
            temp = b, b = c, c = temp;
        printf("Case %d: %d\n", ++Case, b);
    }
    return 0;
}
