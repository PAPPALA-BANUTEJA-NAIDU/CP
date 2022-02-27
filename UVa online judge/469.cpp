#include<bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = int(a); i <= int(b); i++)

char line[150], grid[150][150];
int t, R, C, row, col;

int dr[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};
int floodfill(int r, int c, char c1, char c2) {
	if (r < 0 || r >= R || c < 0 || c >= C) return 0;
	if(grid[r][c] != c1) return 0;
	grid[r][c] = c2;
	int ans = 1;
	REP(d, 0, 7) 
		ans += floodfill(r + dr[d], c + dc[d], c1, c2);
	return ans;
}


int main() {
	int t;
	sscanf(gets(line), "%d", &t);
	gets(line);
	while(t--) {
		R = 0;
		while(1) {
			gets(grid[R]);
			if(grid[R][0] != 'W' && grid[R][0] != 'L')
				break;
			R++;
		}
		C = (int)strlen(grid[0]);
		strcpy(line, grid[R]);
		while(1) {
			sscanf(line, "%d %d", &row, &col); row--; col--;
			printf("%d\n", floodfill(row, col, 'W', '.'));
			floodfill(row, col, '.', 'W');
			gets(line);
			if(strcmp(line, "") == 0 || feof(stdin))
				break;
		}
		if(t)
			printf("\n");
	}
	return 0;
}
