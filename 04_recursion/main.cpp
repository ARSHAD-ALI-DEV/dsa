#include <iostream>
#include <vector>
using namespace std;

void print(int i, int n)
{
    if (i > n)
    {
        cout << endl;
        return; // base case
    }
    cout << i << " ";
    print(i + 1, n);
}
void printVector(vector<int> &arr, int i)
{
    if (i == arr.size())
        return; // base case
    cout << arr[i] << " ";
    printVector(arr, i + 1); // recursive call
}
int main()
{
    print(1, 5);
    vector<int> arr = {2, 4, 6, 8, 10};
    printVector(arr, 0);
    return 0;
}