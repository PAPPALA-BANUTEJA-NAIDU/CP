#include <bits/stdc++.h>
#include <cstdlib>
using namespace std ;

bool poss(int row, int col, int board[][20], int n) {
    for(int k = 0; k < row; k++) {
        if(board[k][col] == 1) {
            return false;
        }

    } 
    int x = row, y = col;
    while(x >= 0 && y >= 0) {
        if(board[x][y] == 1)
            return false;
        x--, y--;
    }
    x = row, y = col;
    while(x >= 0 && y < n) {
        if(board[x][y] == 1)
            return false;
        x--, y++;
    }
    return true;
}

void printBoard(int n, int board[][20]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0;  j< n; j++) {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
}

bool solve(int board[][20], int n, int row) {
    if(row == n) {
        printBoard(n, board);
        return true;
    }

    for(int j = 0; j < n; j++) {
        if(poss(row, j, board, n)) {
            board[row][j] = 1;
            bool success = solve(board, n, row+1);
            if(success) {
                return true;
            }
            board[row][j] = 0;
        }
    }
    return false;

}

int main() {
    int n;
    int board[20][20];
    cin >> n;
    solve(board, n, 0);
}
