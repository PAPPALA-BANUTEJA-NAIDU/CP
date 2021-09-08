#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull make_palindrome(ull x)
{
    ull result = x * 1000;
    result += x / 100;
    result += ((x / 10) % 10) * 10;
    result += (x % 10) * 100;
    
    return result;
}

int main()
{
    ull max;
    cin >> max;

    bool found = false;
    for(auto upper3 = max / 1000; upper3 >= 100 && !found ; upper3--)
    {
        auto palindrome  = make_palindrome(upper3);
        if(palindrome >= max) continue;

        for(ull i = 100 ; i * i <= palindrome; i++)
        {
            if(palindrome % i == 0)
            {
                auto other_factor = palindrome / i;
                if(other_factor < 100 || other_factor > 999)
                    continue;
                cout << palindrome << '\n';
                found = true;
                break;
            }
        }
    }
    return 0;
}