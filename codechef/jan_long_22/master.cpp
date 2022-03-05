#include<bits/stdc++.h>
#include <ratio>
using namespace std;

#define ll long long
#define NX 200005;


int main() {
    set <int> p[5];
    for(int i =0 ; i < 5; i++) {
        p[i].insert(0), p[i].insert(5+1);
    }
    for(int i =0 ; i < 5; i++) {
        for(auto j : p[i])
            cout << j << " ";
        cout << "\n";
    }
}
