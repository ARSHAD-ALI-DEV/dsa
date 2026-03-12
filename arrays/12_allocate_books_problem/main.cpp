#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

int minimumMaxPagesBrute(vector<int> &arr, int students)
{

    int n = arr.size();
    int ans = INT_MAX;

    // total possible partitions
    int totalMasks = pow(2, n - 1);

    for (int mask = 0; mask < totalMasks; mask++)
    {

        int temp = mask;
        int cuts = 0;

        // count cuts
        for (int i = 0; i < n - 1; i++)
        {
            if (temp % 2 == 1)
                cuts++;

            temp = temp / 2;
        }

        if (cuts != students - 1)
            continue;

        int currSum = 0;
        int maxPages = 0;

        temp = mask;

        for (int i = 0; i < n; i++)
        {

            currSum += arr[i];

            if (i < n - 1)
            {

                if (temp % 2 == 1)
                {
                    if (currSum > maxPages)
                        maxPages = currSum;

                    currSum = 0;
                }

                temp = temp / 2;
            }
        }

        if (currSum > maxPages)
            maxPages = currSum;

        if (maxPages < ans)
            ans = maxPages;
    }

    return ans;
}

// optimized approach

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocateBooksOptimized(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {1,2,3,4};

    int students;

    cout << "Enter students: ";
    cin >> students;

    // cout << minimumMaxPagesBrute(arr, students);
    cout << allocateBooksOptimized(arr, arr.size(), students);
}