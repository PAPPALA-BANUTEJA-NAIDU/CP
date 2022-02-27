#include<bits/stdc++.h>
using namespace std;

int solve(string s) {
	int n = s.size();
	int i = 0, count = 0;
	while(i < n) {
		if(s[i] != ' ') {
			count++;
			i++;
		}
		else {
			while(i < n && s[i] == ' ')
				i++;
			if(i == n)
				return count;
			else
				count = 0;
		}
	}
	return count;
}

int main() {
	string s;
	getline(cin, s);
	int res = solve(s);
	printf("%d\n", res);
	
	return 0;
}
