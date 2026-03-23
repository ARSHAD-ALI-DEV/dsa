// question no 18 on leetcode

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find all unique quadruplets
vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    vector<vector<int>> ans;
    int n = arr.size();

    // Step 1: sort array (important for 2-pointer + duplicate handling)
    sort(arr.begin(), arr.end());

    // Step 2: fix first element
    for (int i = 0; i < n; i++)
    {
        // Skip duplicates for i
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        // Step 3: fix second element
        for (int j = i + 1; j < n; j++)
        {
            // Skip duplicates for j
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;

            // Step 4: two pointers
            int p = j + 1;
            int q = n - 1;

            while (p < q)
            {
                // Use long long to avoid overflow
                long long sum = (long long)arr[i] + arr[j] + arr[p] + arr[q];

                if (sum < target)
                {
                    p++; // need bigger sum
                }
                else if (sum > target)
                {
                    q--; // need smaller sum
                }
                else
                {
                    // Found valid quadruplet
                    ans.push_back({arr[i], arr[j], arr[p], arr[q]});

                    p++;
                    q--;

                    // Skip duplicates for p
                    while (p < q && arr[p] == arr[p - 1])
                        p++;

                    // Skip duplicates for q
                    while (p < q && arr[q] == arr[q + 1])
                        q--;
                }
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {-2, -1, -1, 1, 1, 2, 2};

    // Change target to test different cases
    int target = 2;

    vector<vector<int>> ans = fourSum(arr, target);

    // Safe printing
    if (ans.empty())
    {
        cout << "No quadruplets found" << endl;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}