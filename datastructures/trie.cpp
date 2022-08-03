#include <bits/stdc++.h>
#include <cstdio>
#include "trie.h"
using namespace std;

int main() {
    string words[] = {"hello", "he", "apple", "aple", "news"};
    Trie t;

    for(auto x : words) {
        t.insert(x);
    }

    string key ;
    while(true) {
        cin >> key;
        cout << t.search(key) << endl;
    }
}
