#include<bits/stdc++.h>
using namespace std;

bool lamda(pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
}

int main() {
    int k;
    vector< pair <int, int> > answer;

    while (cin >> k) {
        answer.clear();

        for(int i = 1; i <= k; i++) {
            if ((k+i) * k % i == 0) 
                answer.push_back(make_pair((k+i)*k/i, (k+i)));
        }

        sort(answer.begin(), answer.end(), lamda);

        cout << answer.size() << "\n";
        for(int i = 0; i < answer.size(); i++) {
            cout << "1/" << k << " = " << "1/" << answer[i].first << " + 1/" << answer[i].second << "\n";
        }
    }
    return 0;
}
