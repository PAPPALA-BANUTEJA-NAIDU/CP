#include<bits/stdc++.h>
using namespace std;

#define ll long long

int Case = 0;
char inp[1100];
stack<char> emp;
vector<stack<char>> containers;

ll add_stack(int i) {
    for(int j = 0; j < containers.size(); j++) {
        if(inp[i] <= containers[j].top()) {
            containers[j].push(inp[i]);
            return 0;
        }
    }
    containers.push_back(emp);
    containers[containers.size()-1].push(inp[i]);
    return 1;
}

int main() {
    while(gets(inp), strcmp(inp, "end") != 0) {
        ll res = 0;
        containers.clear();
        for(int i = 0;i < strlen(inp); i++) {
            res += add_stack(i);
        }
        printf("Case %d: %lld\n", ++Case, res);
    }
}
