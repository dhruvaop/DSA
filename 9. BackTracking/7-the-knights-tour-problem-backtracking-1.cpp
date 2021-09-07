#include <bits/stdc++.h>
using namespace std;

#define N 8

int solve(int x, int y, int movei, int sol[N][N], int xMove[], int yMove[]);

int isSafe(int x, int y, int sol[N][N]){
    if(x >= 0 && y >= 0 && x < N && y < N && sol[x][y] == -1) return true;
    return false;
}

void printSolution(int sol[N][N])
{
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
            cout << " " << setw(2) << sol[x][y] << " ";
        cout << endl;
    }
}

int solveKT()
{
    int sol[N][N];
    for (int x = 0; x < N; x++) for (int y = 0; y < N; y++) sol[x][y] = -1;

    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    sol[0][0] =  0;

    if (solve(0, 0, 1, sol, xMove, yMove) == 0){
        cout << "Solution does not exist";
        return 0;
    }

    printSolution(sol);
    return 1;
}

int solve(int x, int y, int movei, int sol[N][N], int xMove[8], int yMove[8]){
    if(movei == N*N) return 1;

    int next_x, next_y;
    for(int i = 0; i < 8; i++){
        next_x = x + xMove[i];
        next_y = y + yMove[i];

        if(isSafe(next_x, next_y, sol)){
            sol[next_x][next_y] = movei;
            if(solve(next_x, next_y, movei + 1, sol, xMove, yMove)) return 1;
            sol[next_x][next_y] = -1;
        }
    }

    return 0;
}

// Driver Code
int main()
{
    // Function Call
    solveKT();
    return 0;
}

// This code is contributed by ShubhamCoder
