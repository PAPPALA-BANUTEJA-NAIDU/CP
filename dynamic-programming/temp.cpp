#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[6];
	int pos = lower_bound(a, a+6, 8) - a;
	cout << pos << endl;
}
