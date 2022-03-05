#include <bits/stdc++.h>
#include <regex>
using namespace std;

void printBoard(int mat[][9], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }
}

bool safe(int mat[][9],int i,int j,int no){


	//Check for row and col
	for(int k=0;k<9;k++){
		if(mat[k][j]==no||mat[i][k]==no){
			return false;
		}
	}
	//check for subgrid

	int sx = (i/3)*3;
	int sy = (j/3)*3;

	for(int x=sx; x<sx + 3;x++){
		for(int y =sy;y<sy + 3;y++){
			if(mat[x][y]==no){
				return false;
			}
		}
	}
	return true;
}

bool solveSudoku(int mat[][9], int x, int y, int n) {
    if(x == n) {
        printBoard(mat, n);
        return true;
    }
    if(y == n) {
        return solveSudoku(mat, x + 1, 0, n);
    }

    if(mat[x][y] != 0) {
        return solveSudoku(mat, x, y+1, n);
    }
    for(int i = 1; i <= n; i++ ) {
        if(safe(mat, x, y, i)) {
            mat[x][y] = i;
            bool success = solveSudoku(mat, x, y+1, n);
            if(success) 
                return true;
        }
    }
    mat[x][y] = 0;
    return false;
}

int main(){
	int n = 9;
	int mat[9][9] =
        {{5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}};

        if(!solveSudoku(mat,0,0,n)){
        	cout<<"No solution exists!";
        }
}
