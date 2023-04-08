/*
Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

Example 1:
Input: board =
[['5','3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: true

Example 2:
Input: board =
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
Output: false
Explanation: Same as Example 1, except with the 5 in the top left corner being modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
*/

#include <bits/stdc++.h>
using namespace std;

bool existsInRow(vector<vector<char>> &board, int r, char a, int ci)
{
    for (int i = 0; i < board.size(); i++)
        if (i != ci && board[r][i] == a)
            return true;
    return false;
}

bool existsInColumn(vector<vector<char>> &board, int c, char a, int ri)
{
    for (int i = 0; i < board.size(); i++)
        if (i != ri && board[i][c] == a)
            return true;
    return false;
}

bool existsInGrid(vector<vector<char>> &board, int r, int c, int sR, int sC, char &a, int ri, int ci)
{
    for (int i = sR; i < r; i++)
    {
        for (int j = sC; j < c; j++)
        {
            if (i != ri && j != ci && board[i][j] == a)
                return true;
        }
    }
    return false;
}

bool isValidSudoku(vector<vector<char>> &board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n && board[i][j] != '.'; j++)
        {
            if (board[i][j] != '.')
            {
                if (existsInRow(board, i, board[i][j], j) || existsInColumn(board, j, board[i][j], i))
                    return false;
                if (i < 3 && j < 3)
                    if (existsInGrid(board, 3, 3, 0, 0, board[i][j], i, j))
                        return false;
                if (i < 3 && j >= 3 && j < 6)
                    if (existsInGrid(board, 3, 6, 0, 3, board[i][j], i, j))
                        return false;
                if (i < 3 && j >= 6 && j < 9)
                    if (existsInGrid(board, 3, 9, 0, 6, board[i][j], i, j))
                        return false;
                if (i >= 3 && i < 6 && j < 3)
                    if (existsInGrid(board, 6, 3, 3, 0, board[i][j], i, j))
                        return false;
                if (i >= 3 && i < 6 && j >= 3 && j < 6)
                    if (existsInGrid(board, 6, 6, 3, 3, board[i][j], i, j))
                        return false;
                if (i >= 3 && i < 6 && j >= 6 && j < 9)
                    if (existsInGrid(board, 6, 9, 3, 6, board[i][j], i, j))
                        return false;
                if (i >= 6 && i < 9 && j < 3)
                    if (existsInGrid(board, 9, 3, 6, 0, board[i][j], i, j))
                        return false;
                if (i >= 6 && i < 9 && j >= 3 && j < 6)
                    if (existsInGrid(board, 9, 6, 6, 3, board[i][j], i, j))
                        return false;
                if (i >= 6 && i < 9 && j >= 6 && j < 9)
                    if (existsInGrid(board, 9, 9, 6, 6, board[i][j], i, j))
                        return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> sudoku = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                   {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                   {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                   {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                   {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                   {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                   {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                   {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                   {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    cout << isValidSudoku(sudoku);
}