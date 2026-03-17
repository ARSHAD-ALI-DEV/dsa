// QUESTION 540 ON LEETCODE

#include <iostream>
#include <vector>

using namespace std;
int singleElementInSortedArr(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
        return arr[0];

    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == 0 && arr[mid] != arr[mid + 1])
            return arr[mid];

        if (mid == n - 1 && arr[mid] != arr[mid - 1])
            return arr[mid];

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if (mid % 2 == 0) // even index
        {
            if (arr[mid] == arr[mid + 1])
                st = mid + 1;
            else
                end = mid - 1;
        }
        else // odd index
        {
            if (arr[mid] == arr[mid - 1])
                st = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 3,3, 4, 4, 5, 6, 6,7};
    cout << singleElementInSortedArr(arr) << endl;

    cout << "hi arshad" << endl;
    return 0;
}