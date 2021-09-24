#include<bits/stdc++.h>
using namespace std;

bool is_power_2(int a) {
    return a && !(a & (a-1));
}

int main() {
    int a;
    while (true) {
        cin >> a;
        if (a == 0) {
            break;
        }
        cout << is_power_2(a) << endl;
    }
    return 0;
}
