#include <iostream>
#include <vector>

using namespace std;

pair<int, int> pairSum(vector<int> arr, int target)
{
    pair<int, int> ans;
    int st = 0;
    int end = arr.size() - 1;

    while( st < end)
    {
        if (arr[st] + arr[end] == target)
        {
            ans = {st, end};
            return ans;
        }
        else if (arr[st] + arr[end] < target)
        {
            st++;
        }
        else if (arr[st] + arr[end] > target)
        {
            end--;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    pair<int, int> ans = pairSum(arr, 3);
    cout << ans.first << "," << ans.second << endl;
    cout << "hi";
    return 0;
}