#include<bits/stdc++.h>
using namespace std;

class lruCache {
    list<int> dq;
    
    unordered_map<int, list<int>::iterator> ma;
    int capacity;

public:
    lruCache(int);
    void refer(int);
    void display();
};

lruCache::lruCache(int n) {
    capacity = n;
}

void lruCache::refer(int x) {
    if (ma.find(x) == ma.end()) {
        if (dq.size() == capacity) {
            int last = dq.back();
 
            dq.pop_back();
 
            ma.erase(last);
        }
    }
 
    else
        dq.erase(ma[x]);
 
    dq.push_front(x);
    ma[x] = dq.begin();
}

void lruCache::display()
{
    for (auto it = dq.begin(); it != dq.end();
         it++)
        cout << (*it) << " ";
 
    cout << endl;
}
 
int main()
{
    lruCache ca(4);
 
    ca.refer(1);
    ca.refer(2);
    ca.refer(3);
    ca.refer(1);
    ca.refer(4);
    ca.refer(5);
    ca.display();
 
    return 0;
}
