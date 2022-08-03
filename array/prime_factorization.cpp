#include<bits/stdc++.h>
#include <cerrno>
#include <vector>
using namespace std;

#define N 1000000
#define ll long long

void primeSieve(vector<int> &sieve) {
    for(int i = 2; i <= N; i++) {
        sieve[i] = i;
    }

    for(ll i = 2; i <= N; i++) {
        if(sieve[i] == i) {
            for(ll j = i * i; j <= N; j+= i) {
                if(sieve[j] == j) {
                    sieve[j] = i;
                }
            }
        }
    }
}

vector<int> getFactorization(int number, vector<int> sieveArr) {
    vector<int> factors;
    while(number != 1) {
        factors.push_back(sieveArr[number]);
        number /= sieveArr[number];
    }
    return factors;
}

int main() {
    vector<int> sieveArr(N+1, 0);
    primeSieve(sieveArr);

    int number;
    cin >> number;

    vector<int> factors = getFactorization(number, sieveArr);
    for(int f : factors) {
        cout << f << ", ";
    }
    cout << '\n';
    return 0;
}
