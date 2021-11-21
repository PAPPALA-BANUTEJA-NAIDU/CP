#include<bits/stdc++.h>
using namespace std;

long mem[51][251];

long coins(vector<int> s, int m, int n)
{
	if(n == 0) 
		return 1;
	if (n < 0) 
		return 0;
	if ( n >= 1 && m <= 0) 
		return 0;
	if(mem[m][n] != -1)
		return mem[m][n];
	return mem[m][n] = coins(s, m-1, n) + coins(s, m, n-s[m-1]);
}

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> s(M);
	for(int i = 0; i < 51; i++)
		for(int j = 0; j < 251; j++)
			mem[i][j] = -1;
	for(int i = 0; i < M; i++)
		cin >> s[i];
	cout << coins(s, M, N) << endl;
	return 0;
}
