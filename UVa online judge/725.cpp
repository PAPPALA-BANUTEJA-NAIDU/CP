#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    while(scanf("%d", &n), n) {
        int abcde, found = 0, rem, temp,  fghij, used;
        count++;
        if(count > 1)
            printf("\n");
        for(fghij = 1234; fghij < 98765 / n; fghij++) {
            int abcde = fghij * n;
            used = fghij < 10000;
            temp = abcde;
            while(temp) {
                rem = temp % 10;
                used |= 1 << (rem);
                temp /= 10;
            }
            temp = fghij;
            while(temp) {
                rem = temp % 10;
                used |= 1 << (rem);
                temp /= 10;
            }
            if(used == (1 << 10) - 1) {
                printf("%0.5d / %0.5d = %d\n", abcde, fghij, n);
                found = 1;
            }
        }
        if(!found)
            printf("There are no solutions for %d.\n", n);
    }
    return 0;
}
