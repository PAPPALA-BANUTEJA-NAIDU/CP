#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i > 0; i--) {
        for(int j = 0; j <= n; j++)
            if (j >= i)
                cout << "*"; // Change to "* " to make eq. triangle pyramid 
            else
                cout << " ";
        cout << "\n";
    }
    return 0;
}
