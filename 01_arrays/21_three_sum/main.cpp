// question 15 on leetcode

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> threeSumBrute(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> trip = {arr[i], arr[j], arr[k]};
                    sort(trip.begin(), trip.end());

                    if (s.find(trip) == s.end())
                    {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

vector<vector<int>> threeSumOpt(vector<int> &arr)
{
    int n = arr.size();

    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++)
    {
        int tar = -arr[i];
        set<int> s;

        for (int j = i + 1; j < n; j++)
        {
            int third = tar - arr[j];

            if (s.find(third) != s.end())
            {
                vector<int> trip = {arr[i], arr[j], third};
                sort(trip.begin(), trip.end());

                uniqueTriplets.insert(trip);
            }
            s.insert(arr[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}

vector<vector<int>> threeSumOptimal(vector<int> &arr)
{
    int n = arr.size();
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;

                while (j < k && arr[j] == arr[j - 1])  j++;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {-1, 1, 0, 4, -3, 2, 1};

    // vector<vector<int>> ans = threeSumBrute(arr);
    // vector<vector<int>> ans = threeSumOpt(arr);
    vector<vector<int>> ans = threeSumOptimal(arr);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " , ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "hi arshad" << endl;
    return 0;
}