#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int books[10000];

	while(cin >> n)
	{
		for(int i = 0; i < n; i++)
			cin >> books[i];
		int money, min_sol=0, max_sol=2000000000;
		cin >> money;
		sort(books, books+n);
		for(int i = 0; i < n; i++) 
		{
			for(int j = 0; j < n; j++)
			{
				if(i == j)
					continue;
				if(books[i] + books[j] == money){
					if(abs(books[i] - books[j]) < abs(min_sol - max_sol))
					{
						min_sol = min(books[i], books[j]);
						max_sol = max(books[i], books[j]);
					}
				}
			}
		}
		cout << "Peter should buy books whose prices are " << min_sol << " and " << max_sol << "." << endl << endl;
		
	}
}
