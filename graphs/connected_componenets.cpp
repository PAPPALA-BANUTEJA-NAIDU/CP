// inside int main()
//

numCC = 0;
dfs_num.assign(V, UNVISITED);
for(int i = 0; i < V; i++)
{
	if(dfs_num[i] == UNVISITED)
		printf("CC %d:", ++numCC), dfs(i), printf("\n");
}

// Sample output
//
// CC 1: 0 1 2 3 4
// CC 2: 5
// CC 3: 6 7 8
