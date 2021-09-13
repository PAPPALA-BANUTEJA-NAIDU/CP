#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int main() 
{
    vector<ui> primes;
    primes.reserve(10000);
    primes.push_back(2);
    for(ui i = 3; primes.size() <= 10000; i += 2)
    {
        bool isPrime = true;
        for(auto p : primes)
        {
            if(i % p == 0)
            {
                isPrime = false;
                break;
            }

            if (p*p > i)
                break;
        }
        
        if(isPrime)
        {
            primes.push_back(i);
        }
    }

    ui x;
    cin >> x;

    cout << primes[x - 1]; //bcz index starts with 0

}