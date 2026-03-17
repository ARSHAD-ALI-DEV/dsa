#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
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
        else if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int binarySearchRecursive(vector<int> &arr, int st, int end, int target)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid < target])
        {
            return binarySearchRecursive(arr, mid + 1, end, target);
        }
        else
        {
            return binarySearchRecursive(arr, st, mid - 1, target);
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << binarySearch(arr, 5) << endl;
    cout << binarySearchRecursive(arr, 0, arr.size() - 1, 3) << endl;
    cout << "hi arshad" << endl;
    return 0;
}