// 51 on leetcode

#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<string> &board, int row, int col, int n)
{
    // vertical (only check above)
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        {
            return false;
        }
    }

    // left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
{
    if (row == n)
    {
        ans.push_back(board); // FIXED
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(board, row, j, n))
        {
            board[row][j] = 'Q';
            nQueens(board, row + 1, n, ans);
            board[row][j] = '.'; // backtrack
        }
    }
}

vector<vector<string>> solveNQueens(int n)
{
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);
    return ans;
}

int main()
{
    int n = 4;

    vector<vector<string>> ans = solveNQueens(n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Solution " << i + 1 << ":\n";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << endl;
        }
        cout << "------\n";
    }

    return 0;
}