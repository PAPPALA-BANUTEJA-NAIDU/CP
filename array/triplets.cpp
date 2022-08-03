#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int S) {
    vector<vector<int>> result;
    for(int i = 0; i < arr.size() - 3; i++) {
        int a = arr[i], b = i + 1, c = arr.size() - 1;
        while(b < c) {
            int curr = a + arr[b] + arr[c];
            if(curr == S) {
                result.push_back({a, arr[b], arr[c]});
                b++, c--;
            }
            else if(curr < S) {
                b++;
            }
            else 
                c--;
        }
    }
    return result;

}

int main() {
    vector<int> arr { 1, 2, 3, 4, 5, 6, 7, 8, 9, 15 };
    int S = 18;

    auto result = triplets(arr, S);

    for(auto v : result) {
        for(auto x : v) {
            cout << x << ", ";
        }
        cout << endl;
    }
    return 0;
}
