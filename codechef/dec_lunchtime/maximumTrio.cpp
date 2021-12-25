#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		make_heap(v.begin(), v.end());
		pop_heap(v.begin(), v.end());
		int max1 = v.back();
        v.pop_back();
		pop_heap(v.begin(), v.end());
		int max2 = v.back();
		v.pop_back();

		sort_heap(v.begin(), v.end());
		int min1 = v[0];
		int temp = (max1 - min1) * max2;
		int temp1 = (max2 - min1) * max1;
		cout << max(temp, temp1) << endl;
	}
	return 0;
}
