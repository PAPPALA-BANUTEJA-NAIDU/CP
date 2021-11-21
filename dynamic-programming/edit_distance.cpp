#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int min(int x, int y, int z)
{
	return x < ((y < z) ? y : z) ? x : ((y < z) ? y : z);
}

int edit(vvi &table, string input1, string input2)
{
	for(int i = 0; i <= input2.length(); i++)
		table[0][i] = i;
	for(int i = 0; i <= input1.length(); i++)
		table[i][0] = i;

	for(int i = 1; i <= input1.length(); i++)
	{
		for(int j = 1; j <= input2.length(); j++)
		{
			if(input1[i-1] == input2[j-1])
				table[i][j] = table[i-1][j-1];
			else
				table[i][j] = min(table[i][j-1], table[i-1][j-1], table[i-1][j]) + 1;
		}
	}	
	return table[input1.length()][input2.length()];
}

int main()
{
	string input1, input2;
	cin >> input1 >> input2;
	vvi table(input1.size() + 1, vi (input2.length() + 1));
	int editDistance = edit(table, input1, input2);
	cout << "Min Edit distance: " << editDistance << endl;

	int r = input2.length();
	int c = input1.length();
	if(editDistance == 1)
	{
		if(1==table[r-1][c-1]+1){
			cout<<"replace"<<endl;
		}
		else if(1==table[r-1][c]+1){
			cout<<"delete"<<endl;
		}
		else if(1==table[r][c-1]+1){
			cout<<"insertion"<<endl;
		}
	}
	else{
		while(c!=0 && r!=0){
			if(input1[c-1]==input2[r-1]){
				c--;
				r--;
			}
			else if(table[r][c]==table[r-1][c-1]+1){
				cout<<"replace"<<endl;
				c--;
				r--;
			}
			else if(table[r][c]==table[r-1][c]+1){
				cout<<"delete"<<endl;
				r--;
			}
			else if(table[r][c]==table[r][c-1]+1){
				cout<<"insertion"<<endl;
				c--;
			}
		}
	}	
}
