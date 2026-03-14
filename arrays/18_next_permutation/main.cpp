// QUESTION NO 31 ON LEETCODE

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int> &arr)
{
    int pivot = -1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    for (int i = arr.size() - 1; i > pivot; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = arr.size() - 1;

    while (i <= j)
    {
       swap(arr[i++], arr[j--]);
    }
    
}

int main()
{
    vector<int> arr = { 1,3,2};
    nextPermutation(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    cout << "hi arshad" << endl;
    return 0;
}