#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    int Case = 0;
    while(t--) {
        int n, mm= 0;
        scanf("%d", &n);
        for(int i = 0 ; i < n; i++) {
            int temp = -1;
            scanf("%d", &temp);
            if(temp > mm)
                mm = temp;
        }
        printf("Case %d: %d\n", ++Case, mm);
    }
    return 0;
}
