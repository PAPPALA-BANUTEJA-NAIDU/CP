#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d\n\n", &t);
    while(t--) {
        map<string, int> record;
        string tree;
        int n = 0; 
        while(getline(cin, tree)) {
            if(tree.compare("") == 0)
                break;
            record[tree]++;
            n++;
        }
        for(auto i = record.begin(); i!= record.end(); i++) 
            cout << i->first << " " << fixed << setprecision(4) << \
                i->second * 100.0 / n << "\n";
        if(t)
            puts("");
    }
    return 0;
}
