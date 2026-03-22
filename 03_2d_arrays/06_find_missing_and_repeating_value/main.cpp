// question no 2965 on leetcode

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> findMisAndRepValues(vector<vector<int>> &grid)
{
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a, b;

    int expSum = 0, actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n * n) * (n * n + 1) / 2;
    b = expSum + a - actualSum;
    ans.push_back(b);
    return ans;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {9, 4, 6},
        {7, 8, 9}};

    vector<int> ans = findMisAndRepValues(matrix);
    for (int val : ans)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "hi arshad" << endl;
    return 0;
}