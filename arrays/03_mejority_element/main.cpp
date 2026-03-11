// QUESTION NO. 169 ON LEETCODE.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mejorityElementBrute(vector<int> arr)
{
    int n = arr.size();
    for (int val : arr)
    {
        int freq = 0;
        for (int el : arr)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > (n / 2))
        {
            return val;
        }
    }
}

// optimized approach with O(n log n)

int mejorityElementOptimized(vector<int> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int freq = 1, ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = arr[i];
        }

        if (freq > (n / 2))
        {
            return ans;
        }
    }

    return -1; // agar majority element na mile
}

// optimal approach with moor's voting algorithm

int moorsAlgo(vector<int> arr)
{
    int freq = 0, ans = arr[0];
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }
        if (arr[i] == ans)
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, 1, 2, 2, 2, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};

    cout << "mejority element in ===" << moorsAlgo(arr) << endl;

    cout << "hi" << endl;
    return 0;
}