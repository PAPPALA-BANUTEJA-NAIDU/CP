#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int f, b, tr;
		cin >> f >> b >> tr;
		int busRoute = f + b;
		if(busRoute > tr)
			cout << "TRAIN" <<endl;
		else if(busRoute < tr)
			cout << "PLANEBUS" << endl;
		else
			cout << "EQUAL" << endl;
	}
	return 0;
}
