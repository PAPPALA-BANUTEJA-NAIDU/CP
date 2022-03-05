#include <bits/stdc++.h>
#include <regex>
using namespace std;

int gridWays(int m , int n, int x, int y) {
    if( x > m || y > n ) {
        return 0;
    }
    if( x == m && y == n ) {
        return 1;
    }
    return gridWays(m, n, x+1, y) + gridWays(m, n, x, y + 1);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gridWays(m, n, 1, 1);
}
