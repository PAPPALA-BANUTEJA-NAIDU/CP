#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ull value = 2e6;
    ull sum = 0;
    vector<ull> primes = {2};
    for(ull i = 3; i < value; i += 2)
    {
        bool isPrime = true;
        for(auto p : primes)
        {
            if (p*p > i)
                break;

            if(i % p == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            primes.push_back(i);

    }
    
    for(auto p : primes)
    {
        sum += p;
    }
    cout << sum;
}






// 142913828922
// 2323806476179