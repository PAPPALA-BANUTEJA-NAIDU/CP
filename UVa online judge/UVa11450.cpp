#include<bits/stdc++.h>
using namespace std;

int C, M, prices[25][25];
int memo[200][25];

int shop(int money, int g)
{
	if (money < 0)
		return -1000000;
	if(g == C)
		return M-money;
	if(memo[money][g] != -1)
		return memo[money][g];
	int ans = -1;
	for(int i = 1; i <= prices[g][0]; i++)
	{
		ans = max(shop(money-prices[g][i], g+1), ans);
	}
	return memo[money][g] = ans;
}

int main()
{
	int t, score;
	cin >> t;
	while(t--)
	{
		cin >> M >> C;
		for(int i = 0; i < C; i++)
		{	
			cin >> prices[i][0];
			for(int j = 1; j <= prices[i][0]; j++)
				cin >> prices[i][j];
		}

		memset(memo, -1, sizeof memo);
		score = shop(M, 0);
		if(score < 0)
			cout << "no solution\n";
		else
			cout << score << "\n";
	}
	return 0;
}
