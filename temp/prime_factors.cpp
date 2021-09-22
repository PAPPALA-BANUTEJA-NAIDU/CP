#include <bits/stdc++.h>
using namespace std;

void prime_factors(int n) 
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            while (n % i == 0) 
                n /= i;
        }
    }
    if (n > 1)
        cout << n << " ";
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    prime_factors(n);
    return 0;
}
