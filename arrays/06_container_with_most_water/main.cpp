// QUESTION NUMBER 11 ON LEETCODE.

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int containerWithMostWaterBrute(vector<int> cont)
{
    int ans = INT_MIN;

    for (int i = 0; i < cont.size(); i++)
    {
        for (int j = i + 1; j < cont.size(); j++)
        {

            int height = min(cont[i], cont[j]);
            int width = j - i;

            int area = height * width;

            ans = max(ans, area);
        }
    }

    return ans;
}

int containerWithMostWatherOptimized(vector<int> cont){
    int left = 0;
    int right = cont.size() - 1;
    int maxWater = 0;
    
    while (left < right)
    {
        int currHeight = min(cont[left], cont[right]);
        int width = right - left;
        int currWater = currHeight * width;
        maxWater = max(maxWater , currWater);

        if(cont[left] < cont[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxWater;
    
}

int main()
{
    vector<int> arr = {2, 4, 5, 7, 3, 6};
    cout << containerWithMostWaterBrute(arr)<< endl;
    cout << containerWithMostWatherOptimized(arr) << endl;
    return 0;
}