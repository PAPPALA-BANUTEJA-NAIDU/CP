#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int main()
{
    ui value = 3000;
    ui result ;
    for(ui a = 1; a < value; a++)
    {
        for(ui b = a + 1; b < value - a; b++)
        {
            ui c_sq = a * a + b * b;
            ui c = sqrt(c_sq);

            if(c * c != c_sq)
                continue;
            
            ui sum = a + b + c;
            if(sum == 1000 )
            {
                result = a*b*c;
                break;
            }
        }
    }
    cout << result;
}