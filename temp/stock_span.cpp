#include<bits/stdc++.h>
using namespace std;

void stockSpan(int prices[], int n, int span[]){
    stack<int> s;
    s.push(0);

    span[0] = 1;
    for(int i = 1; i <= n-1; i++){
        int currentPrize = prices[i];
        while(!s.empty() && prices[s.top()] < currentPrize) {
            s.pop();
        }
        if(!s.empty())
            span[i] = i - s.top() ;
        else
            span[i] = i + 1;
        s.push(i);
    }
}

int main() {
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(int);
    int span[1000] = {0};
    stockSpan(prices, n, span);
    for(int i = 0; i < n;i ++) {
        cout << span[i] << " " ;
    }
    cout << '\n';
}
