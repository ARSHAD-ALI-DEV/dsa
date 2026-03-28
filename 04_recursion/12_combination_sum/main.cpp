//  question no 39 on leetcode

#include <iostream>
#include <vector>
#include <set>

using namespace std;

void getAllCombinations(vector<int> &arr, int idx, int target,
                       set<vector<int>> &st, vector<int> &combin)
{
    // ✅ valid combination
    if (target == 0)
    {
        st.insert(combin);  // set me insert → duplicates automatically remove
        return;
    }

    // ❌ invalid case
    if (target < 0 || idx == arr.size())
    {
        return;
    }

    // 🔹 INCLUDE (multiple times allowed)
    combin.push_back(arr[idx]);
    getAllCombinations(arr, idx, target - arr[idx], st, combin);
    combin.pop_back(); // backtrack

    // 🔹 EXCLUDE
    getAllCombinations(arr, idx + 1, target, st, combin);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target)
{
    set<vector<int>> st;   // ✅ set for uniqueness
    vector<int> combin;

    getAllCombinations(arr, 0, target, st, combin);

    // set → vector convert
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 3};  // duplicates allowed now
    int target = 8;

    vector<vector<int>> ans = combinationSum(arr, target);

    // print
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nhi arshad" << endl;
    return 0;
}