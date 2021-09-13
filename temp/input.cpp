#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    // cin >> n;
    /*
    while (n--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    */
    /*
    while (scanf("%d %d", &a, &b), (a || b)) 
    {
        printf("%d", a+b);
    }
    */
    
    /*while (scanf("%d %d", &a, &b) == 2)
    {
    //  we can use while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);
    }
    */
    n = 1;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(n > 1) printf("\n");
        printf("Case %d: %d\n", n++, a+b);
    }
}
