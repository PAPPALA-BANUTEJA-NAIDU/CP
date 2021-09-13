#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
    ull number = 1e6;

    vector<ull> divisors;

    ull answer;

    for(ull i = 500; i < 1e6; i++)
    {
        for(ull j = 1; j < 50000; j++)
        {
            if( i % j == 0)
            {
                divisors.push_back(j);
            }
        }
        if(divisors.size() == 500)
        {
            answer = i;
            break;
        }
        else
            divisors = {};

    }
    
    cout << answer;
}