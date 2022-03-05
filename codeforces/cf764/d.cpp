#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
const int N = 200000, A = 26;
const int mod = 998244353;
char cc[N+1];
int kk[A];

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k >> cc;
        for(int a = 0; a < A; a++) 
            kk[a] = 0;
        for(int i = 0; i < n; i++) {
            int a = cc[i] - 'a';
            kk[a]++;
        }
        int x = 0, y = 0;
        for(int a = 0; a < A; a++) {
            if(kk[a] % 2)
                x++;
            y += kk[a] / 2;
        }
        ll ans = 0;
        for(int h = 0; h <= y; h++)
            ans = max(ans, h / k * 2 + ( x + (y - h) * 2 >= k ));
        cout << ans << '\n';
    }
    return 0;
}
