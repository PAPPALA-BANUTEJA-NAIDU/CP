#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unsigned long long sum = n * (n + 1) / 2;
    cout << sum << '\n';
    
    unsigned long long sq_sum = n * (n + 1) * ( 2 * n + 1) / 6;
     
    cout << sq_sum << '\n';
    unsigned long long diff = sum * sum - sq_sum;
    cout << diff << '\n';
}