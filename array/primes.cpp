#include<bits/stdc++.h>
using namespace std;

#define N 1000000
#define ll long long


void primeSieve(vector<int> &sieve) {
    sieve[0] = sieve[1] = 0;

    for(int i = 3; i <= N; i+=2) {
        sieve[i] = 1;
    }

    for(ll i = 3; i <= N; i++) {
        if(sieve[i]) {
            for(ll j = i *i; j <= N; j+= i) {
                sieve[j] = 0;
            }
        }
    }
}

int main() {
    vector<int> sieve(N+1, 0) ;
    primeSieve(sieve);

    for(int i = 0; i < 100; i++) {
        if(sieve[i])
            cout << i << ", ";
    }
    cout << '\n';
    return 0;
}
