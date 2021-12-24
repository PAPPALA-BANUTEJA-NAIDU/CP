#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		int buildings;
		cin >> buildings;
		
		int result = 0;
		for(int i = 0; i < buildings; i++) {
			int temp;
			cin >> temp;
			result += temp;
		}
		cout << (result % buildings == 0 ? 0 : 1)  << endl;
	}
	return 0;
}
