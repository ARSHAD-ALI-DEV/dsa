#include <iostream>
#include <vector>

using namespace std;

int searchInRotatedSortedArr(vector<int> &arr, int target)
{
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        // left half sorted
        if (arr[st] <= arr[mid])
        {
            if (arr[st] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        // right half sorted
        else
        {
            if (arr[mid] < target && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 1, 2};
    cout << searchInRotatedSortedArr(arr, 4) << endl;

    cout << "hi arshad" << endl;
    return 0;
}