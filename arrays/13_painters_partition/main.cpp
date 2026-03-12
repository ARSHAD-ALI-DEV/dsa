#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painters = 1;
    int time = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedTime){
            return false;
        }

        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }

    return painters > m ? false : true;
}

int maxMinTimeTaken(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int ans = -1;
    int st = maxVal, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(isValid(arr, n , m , mid)){ //left
            ans = mid;
            end = mid -1;
        }else{ //right
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10,10,10,10};
    int painters = 1;

    cout << maxMinTimeTaken(arr, arr.size(), painters) << endl;

    cout << "hi arshad" << endl;
    return 0;
}