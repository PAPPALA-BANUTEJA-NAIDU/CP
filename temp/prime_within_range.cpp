#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end;
    scanf("%d%d", &start, &end);
    if (start <= 0 || end <= 0) exit(0);
    if (start == 1) start++;
    for(int j = start; j <= end; j++) {
        int flag = 0;
        for (int i = 2; i <= j/2; i++)
        {
            if (j % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", j);
        }
    }
    return 0;
}
