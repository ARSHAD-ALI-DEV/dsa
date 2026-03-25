// quesiont 46 on leetcode

#include <iostream>
#include <vector>

using namespace std;

void getPerms(vector<int> &arr, int idx, vector<vector<int>> &ans)
{

    if (idx == arr.size())
    {
        ans.push_back({arr});
        return;
    }

    for (int i = idx; i < arr.size(); i++)
    {
        swap(arr[idx], arr[i]);
        getPerms(arr, idx + 1, ans);

        swap(arr[idx], arr[i]);
    }
}

vector<vector<int>> permute(vector<int> &arr)
{
    vector<vector<int>> ans;
    getPerms(arr, 0, ans);
    return ans;
}

int main()
{

    vector<int> arr = {1,2,3};
    vector<vector<int>> result = permute(arr);

    for (auto &subset : result)
    {
        for (auto &x : subset)
            cout << x << " ";
        cout << endl;
    }
    cout << "hi arshad" << endl;
    return 0;
}