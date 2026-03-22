// question 54 on leetcode

#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }

        // right
        for (int i = srow + 1; i <= erow; i++)  // ✅ fixed (was i = 0)
        {
            ans.push_back(mat[i][ecol]);
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            { // edge case
                break;
            }
            ans.push_back(mat[erow][j]);
        }

        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            { // edge case
                break;
            }
            ans.push_back(mat[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }

    return ans;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 10, 6},
        {7, 8, 9}};

    vector<int> ans = spiralOrder(matrix);

    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;

    cout << "hi arshad" << endl;
    return 0;
}