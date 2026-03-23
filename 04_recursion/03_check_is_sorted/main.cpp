#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main()
{
    vector<int> arr1 = {1,2,3,4,5,5,6,6};
    vector<int> arr2 = {1,2,5,9,88,7,76788,585,6,6};

    cout << isSorted(arr1, arr1.size()) << endl;
    cout << isSorted(arr2, arr2.size()) << endl;

    cout << "hi arshad" << endl;
    return 0;
}