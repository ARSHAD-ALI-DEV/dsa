// question 1 on leetcode

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSumBrute(vector<int> arr, int target)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] + arr[i] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

vector<int> twoSumOptimized(vector<int> &arr, int target)
{
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int second = target - first;

        if (m.find(second) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }

        m[first] = i;
    }

    return ans;
}

int main()
{

    vector<int> arr = {5, 2, 11, 7, 15};
    // vector<int> ans = twoSumBrute(arr, 9);
    vector<int> ans = twoSumOptimized(arr, 9);
    for (int val : ans)
    {
        cout << val << " ";
    }

    cout << endl;
    cout << "hi arshad" << endl;
    return 0;
}