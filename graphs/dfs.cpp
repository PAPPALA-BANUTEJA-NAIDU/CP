#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define DFS_WHITE -1
#define DFS_BLACK 1

vector<vii> AdjList;

void printThis(char * message)
{
	printf("================================\n");
	printf("%s\n", message);
	printf("================================\n");
}

vi dfs_num;
int numCC;

void dfs(int u)
{
	printf(" %d", u);
	dfs_num[u] = DFS_BLACK;
	for(int j = 0; j < (int)AdjList[u].size(); j++)
	{
		ii v = AdjList[u][j];
		if(dfs_num[v.first] == DFS_WHITE)
			dfs(v.first);
	}
}

void floodfill(int u, int color)
{
	dfs_num[u] = color;
	for(int i = 0; i < (int)AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if(dfs_num[v.first] == DFS_WHITE)
			floodfill(v.first, color);
	}
}

vi topoSort;

void dfs2(int u)
{
	dfs_num[u] = DFS_BLACK;
	for(int i = 0; i < (int)AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if(dfs_num[v.first] == DFS_WHITE)
			dfs2(v.first);
	}
	topoSort.push_back(u);
}

#define DFS_GRAY 2

vi dfs_parent;



int main() 
{
	int V, total_neighbors, id, weight;

	freopen("in_01.txt", "r", stdin);

	scanf("%d", &V);
	AdjList.assign(V, vii()); // assign blank vectors of pair<int, int>s to AdjList
	for (int i = 0; i < V; i++) {
		scanf("%d", &total_neighbors);
		for (int j = 0; j < total_neighbors; j++) {
			scanf("%d %d", &id, &weight);
			AdjList[i].push_back(ii(id, weight));
		}
	}

	printThis("Standard DFS Demo (the input graph must be UNDIRECTED)");
	numCC = 0;
	dfs_num.assign(V, DFS_WHITE);    // this sets all vertices' state to DFS_WHITE
	for (int i = 0; i < V; i++)                   // for each vertex i in [0..V-1]
		if (dfs_num[i] == DFS_WHITE)            // if that vertex is not visited yet
			printf("Component %d:", ++numCC), dfs(i), printf("\n");   // 3 lines here!
	printf("There are %d connected components\n", numCC);

	printThis("Flood Fill Demo (the input graph must be UNDIRECTED)");
	numCC = 0;
	dfs_num.assign(V, DFS_WHITE);
	for (int i = 0; i < V; i++)
		if (dfs_num[i] == DFS_WHITE)
			floodfill(i, ++numCC);
	for (int i = 0; i < V; i++)
		printf("Vertex %d has color %d\n", i, dfs_num[i]);

	// make sure that the given graph is DAG
	printThis("Topological Sort (the input graph must be DAG)");
	topoSort.clear();
	dfs_num.assign(V, DFS_WHITE);
	for (int i = 0; i < V; i++)            // this part is the same as finding CCs
		if (dfs_num[i] == DFS_WHITE)
			dfs2(i);
	reverse(topoSort.begin(), topoSort.end());                 // reverse topoSort
	for (int i = 0; i < (int)topoSort.size(); i++)       // or you can simply read
		printf(" %d", topoSort[i]);           // the content of `topoSort' backwards
	printf("\n");

	printThis("Graph Edges Property Check");
	numCC = 0;
	dfs_num.assign(V, DFS_WHITE); dfs_parent.assign(V, -1);
	for (int i = 0; i < V; i++)
		if (dfs_num[i] == DFS_WHITE)
			printf("Component %d:\n", ++numCC), graphCheck(i);       // 2 lines in one

	printThis("Articulation Points & Bridges (the input graph must be UNDIRECTED)");
	dfsNumberCounter = 0; dfs_num.assign(V, DFS_WHITE); dfs_low.assign(V, 0);
	dfs_parent.assign(V, -1); articulation_vertex.assign(V, 0);
	printf("Bridges:\n");
	for (int i = 0; i < V; i++)
		if (dfs_num[i] == DFS_WHITE) {
			dfsRoot = i; rootChildren = 0;
			articulationPointAndBridge(i);
			articulation_vertex[dfsRoot] = (rootChildren > 1); }       // special case
	printf("Articulation Points:\n");
	for (int i = 0; i < V; i++)
		if (articulation_vertex[i])
			printf(" Vertex %d\n", i);

	printThis("Strongly Connected Components (the input graph must be DIRECTED)");
	dfs_num.assign(V, DFS_WHITE); dfs_low.assign(V, 0); visited.assign(V, 0);
	dfsNumberCounter = numSCC = 0;
	for (int i = 0; i < V; i++)
		if (dfs_num[i] == DFS_WHITE)
			tarjanSCC(i);

	return 0;
}
