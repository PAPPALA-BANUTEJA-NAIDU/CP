#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        int max1 = *max_element(a.begin(), a.end());
        int min1 = *min_element(a.begin(), a.end());
        cout << max1 - min1 << "\n";
    }
    return 0;
}
