// QUESTION 238 ON LEETCODE

#include <iostream>
#include <vector>

using namespace std;

vector<int> productOfArrayBrute(vector<int> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            product *= arr[j];
        }

        ans.push_back(product);
    }
    return ans;
}

vector<int> productOfArrayOptimized(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    vector<int> prefix(n, 1);
    // vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++)
    {
        // prefix[i] = prefix[i - 1] * nums[i - 1];
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     ans[i] = prefix[i] * suffix[i];
    // }

    return ans;
}

int main()
{
    vector<int> eg = {1, 2, 3, 4};
    // vector<int> ans = productOfArrayBrute(eg);
    vector<int> ans = productOfArrayBrute(eg);
    
    for (int val : ans)
    {
        cout << val << " , ";
    }
    cout << endl;
    cout << "hi" << endl;
    return 0;
}