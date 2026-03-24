// quesiont no 90 on leetcode

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void getAllSubsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &allSubsets)
{
    // base case
    if (i == arr.size())
    {
        allSubsets.push_back(ans);
        return;
    }

    // include current element
    ans.push_back(arr[i]);
    getAllSubsets(arr, ans, i + 1, allSubsets);

    // backtrack
    ans.pop_back();

    // skip duplicates
    int idx = i + 1;
    while (idx < arr.size() && arr[idx] == arr[idx - 1])
        idx++;

    // exclude current (and duplicates)
    getAllSubsets(arr, ans, idx, allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int> &arr)
{
    sort(arr.begin(), arr.end());

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(arr, ans, 0, allSubsets);

    return allSubsets;
}

int main()
{
    vector<int> arr = {1, 2, 2};

    vector<vector<int>> result = subsetsWithDup(arr);

    for (auto &subset : result)
    {
        for (auto &x : subset)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}