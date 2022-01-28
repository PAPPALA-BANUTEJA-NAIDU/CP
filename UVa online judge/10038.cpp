#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(scanf("%d", &n) == 1) {
        int arr[n];
        for(int i = 0 ; i < n ;i++) {
            cin >> arr[i];
        }
        int mark[3001] = {0}, ans = 0;
        for(int i = 1; i < n; i++) {
            if(abs(arr[i] - arr[i-1] < n))
                mark[abs(arr[i] - arr[i-1])]++;
        }
        for(int i = 1; i < n; i++) 
            if(mark[i] == 0)
                ans = 1;
        cout << ((!ans) ? "Jolly" : "Not jolly") << '\n';
    }
    return 0;
}
