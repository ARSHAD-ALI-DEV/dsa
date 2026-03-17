// QUESTION NO. 75 ON LEETCODE

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void sortingBrute(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void sortOptimized(vector<int> &arr)
{

    unordered_map<int, int> mp;

    // Count frequency
    for (int x : arr)
    {
        mp[x]++;
    }

    int i = 0;

    // Fill 0s
    while (mp[0]--)
    {
        arr[i++] = 0;
    }

    // Fill 1s
    while (mp[1]--)
    {
        arr[i++] = 1;
    }

    // Fill 2s
    while (mp[2]--)
    {
        arr[i++] = 2;
    }
}

void sortOptimal(vector<int> &arr){ // dutch national flag
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid] == 1){
            mid++;
        }

        if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
}

int main()
{

    vector<int> arr = {1,1,1,2,1,0,2,2,0};
    // sortOptimized(arr);
    sortOptimal(arr);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    cout << "hi arshad" << endl;
    return 0;
}