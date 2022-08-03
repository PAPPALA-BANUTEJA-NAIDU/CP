#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small) {
    // store the occurrences in the result vector
    vector<int> result = {};
    int ind = 0;
    while (ind != -1) {
        ind = big.find(small, ind + 1);
        // if(ind == -1) {
        // break;
        //}
        result.push_back(ind);
    }
    for (int i = 0; i < 6; i++) {
        cout << i << " " << endl;
    }
    return result;
}

int main() {
    string bigs = "I liked the movie, acting in movie was great.";
    string small = "movie";
    vector<int> res = stringSearch(bigs, small);
    for (auto x : res) {
        cout << x << " ";
    }
    cout << '\n';
}

ma
