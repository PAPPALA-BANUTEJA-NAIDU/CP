#include<bits/stdc++.h>
#include <cassert>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n ; i++) {
            int temp ;
            cin >> temp;
            if(temp > 1) {
                while(!v.empty() && v.back() + 1 != temp) 
                    v.pop_back();
                assert(!v.empty());
                v.pop_back();
            }
            v.push_back(temp);
            for(int j = 0; j < v.size(); j++) {
                if(j > 0) 
                    cout << ".";
                cout << v[j];
            }
            cout << '\n';
        }
    }
    return 0;
}
