#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &x, &y) == 5) {
        if(a == 0) break;

        int used[60] = {};
        used[a] = used[b] = used[c] = used[x] = used[y] = 1;
        int found = 0, i;
        for(int i = 1; i <= 52; i++) {
            if(used[i]) continue;
            int arr[3] = {x, y, i}, w = 0;
            if(arr[0] > a)  w++;
            if(arr[1] > b)  w++;
            if(arr[2] > c)  w++;
            if(w < 2) continue;
            w = 0;
            if(arr[0] > a)  w++;
            if(arr[2] > b)  w++;
            if(arr[1] > c)  w++;
            if(w < 2) continue;
            w = 0;
            if(arr[1] > a)  w++;
            if(arr[0] > b)  w++;
            if(arr[2] > c)  w++;
            if(w < 2) continue;
            w = 0;
            if(arr[1] > a)  w++;
            if(arr[2] > b)  w++;
            if(arr[0] > c)  w++;
            if(w < 2) continue;
            w = 0;
            if(arr[2] > a)  w++;
            if(arr[0] > b)  w++;
            if(arr[1] > c)  w++;
            if(w < 2) continue;
            w = 0;
            if(arr[2] > a)  w++;
            if(arr[1] > b)  w++;
            if(arr[0] > c)  w++;
            if(w < 2) continue;
            found = 1;
            printf("%d\n", i);
            break;
        }
        if(!found)
            puts("-1");
    }
    return 0;
}
