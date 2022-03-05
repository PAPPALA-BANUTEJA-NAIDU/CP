#include <algorithm>
#include <bits/stdc++.h>
#include <fstream>
#include <utility>
using namespace std;

vector<int> permutation;
vector<int> chosen;
int n;
void search() {
    if (permutation.size() == n) {
        for(int i = 0 ; i < n; i++) 
            cout << permutation[i] << " ";
        cout << "\n";
    } else {
        for (int i = 1; i <= n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

void perm(vector<int> &arr, int i) {
    if(i == arr.size() - 1) {
        for(int k = 0; k < arr.size(); k++) {
            cout << arr[k];
        }
        cout << endl;
        return;
    }
    for(int j = i; j < arr.size(); j++) {
        swap(arr[i], arr[j]);
        perm(arr, i+1);
        swap(arr[i], arr[j]);
    }
}

int main() {
    n = 4;
    for(int i = 0 ; i < n; i++) 
        chosen.push_back(false);
    search();
    vector<int> v = {1, 2, 3, 4};
    //perm(v, 0);

    return 0;
    //do {
        //for(int i = 0 ; i < n; i++) 
            //cout << per[i] << " ";
        //cout << "\n";
    //} while(next_permutation(per.begin(), per.end()));
}
