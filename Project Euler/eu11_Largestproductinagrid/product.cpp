#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

int main()
{
    const ui size = 20;
    ui matrix[size][size];

    ifstream inf("input.txt");
    for(ui i = 0; i < size; i++)
        for(ui j = 0; j < size; j++)
            inf >> matrix[i][j];
        
    unsigned int best = 0;
    // walk through all cells of the matrix
    for (unsigned int y = 0; y < size; y++)
        for (unsigned int x = 0; x < size; x++)
        {
            // three more horizontal cells (right)
            if (x + 3 < size)
            {
            unsigned int current = matrix[x][y] * matrix[x+1][y] * matrix[x+2][y] * matrix[x+3][y];
            if (best < current)
                best = current;
            }
            // three more vertical cells available (down)
            if (y + 3 < size)
            {
            unsigned int current = matrix[x][y] * matrix[x][y+1] * matrix[x][y+2] * matrix[x][y+3];
            if (best < current)
                best = current;
            }
            // three more diagonal cells (right-down)
            if (x + 3 < size && y + 3 < size)
            {
            unsigned int current = matrix[x][y] * matrix[x+1][y+1] * matrix[x+2][y+2] * matrix[x+3][y+3];
            if (best < current)
                best = current;
            }
            // three more diagonal cells (left-down)
            if (x + 3 < size && y >= 3)
            {
            unsigned int current = matrix[x][y] * matrix[x+1][y-1] * matrix[x+2][y-2] * matrix[x+3][y-3];
            if (best < current)
                best = current;
            }
        }

    std::cout << best << std::endl;
    return 0;

}

