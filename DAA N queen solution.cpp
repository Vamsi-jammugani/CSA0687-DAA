#include <stdio.h>
#include <stdbool.h>

#define N 10

void printSolution(int board[N][N], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j])
                printf("Q ");
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}

bool isSafe(int board[N][N], int row, int col, int n) {
    int i, j;

    // Check the left side of the current row
    for (i = 0; i < col; i++) {
        if (board[row][i])
            return false;
    }

    // Check upper diagonal on the left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return false;
    }

    // Check lower diagonal on the left side
    for (i = row, j = col; j >= 0 && i < n; i++, j--) {
        if (board[i][j])
            return false;
    }

    return true;
}

bool solveNQueensUtil(int board[N][N], int col, int n) {
    if (col >= n) {
        printSolution(board, n);
        return true;
    }

    bool res = false;

    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;

            res = solveNQueensUtil(board, col + 1, n) || res;

            board[i][col] = 0; // Backtrack
        }
    }

    return res;
}

void solveNQueens(int n) {
    int board[N][N] = {0};

    if (!solveNQueensUtil(board, 0, n))
        printf("No solution exists for N = %d.\n", n);
}

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("\n");

    solveNQueens(n);

    return 0;
}

