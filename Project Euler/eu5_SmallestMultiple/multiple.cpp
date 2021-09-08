#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull gcd(ull a, ull b)
{
    while(a != 0)
    {
        ull c = a;
        a = b % a;
        b = c;
    }
    return b;
}

ull lcm(ull a, ull b)
{
    return a * (b / gcd(a, b));
}

int main() 
{
    ull n;
    cin >> n;
    
    ull result = 1;
    for(ull i = 2; i <= n ; i++)
    {
        result = lcm(result, i);
    }

    cout << result;

    return 0;
}