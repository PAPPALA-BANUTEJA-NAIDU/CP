#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max = INT_MIN, max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    printf("%d", max2);
    return 0;
}
