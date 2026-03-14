#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(vector<int> &v1, int m, vector<int> &v2, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (v1[i] >= v2[j])
        {
            v1[idx--] = v1[i--];
        }
        else
        {
            v1[idx--] = v2[j--];
        }
    }

    while (j >= 0)
    {
        v1[idx--] = v2[j--];
    }
}

int main()
{
    vector<int> v1 = {1, 2, 2, 0, 0, 0, 0};
    vector<int> v2 = {2, 3, 4, 5};

    mergeSortedArrays(v1, 3, v2, 4);

    for (int val : v1)
        cout << val << " ";

    return 0;
}