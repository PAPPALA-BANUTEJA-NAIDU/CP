#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        bool cs = 1, cq = 1, cpq = 1;

        int cmd, value;
        while(n--) {
            cin >> cmd >> value;
            if(cmd == 1) {
                s.push(value);
                q.push(value);
                pq.push(value);
            }
            else {
                if(s.empty() || s.top() != value) cs = 0;
                else s.pop();
                if(q.empty() || q.front() != value) cq = 0;
                else q.pop();
                if(pq.empty() || pq.top() != value) cpq = 0;
                else pq.pop();
            }
        }
        if(!cs && !cq && !cpq) cout << "impossible\n";
        else if(cs && !cq && !cpq) cout << "stack\n";
        else if(!cs && cq && !cpq) cout << "queue\n";
        else if(!cs && !cq && cpq) cout << "priority queue\n";
        else  cout << "not sure\n";
    }
    return 0;
}
