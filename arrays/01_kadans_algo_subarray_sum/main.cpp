// QUESTION LEETCODE 53.

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int,int> maxSumSubIndecies(vector<int> arr){
    
    int maxSum = arr[0];
    int currSum = 0;

    int start = 0, end = 0;
    int currStart = 0;

    for(int i = 0; i < arr.size(); i++){
        currSum += arr[i];

        if(currSum > maxSum){
            maxSum = currSum;
            start = currStart;
            end = i;
        }

        if(currSum < 0){
            currSum = 0;
            currStart = i + 1;
        }
    }

    return {start, end};
}

int maxSumSub(vector<int> arr){
    
    int maxSum = arr[0];
    int currSum = 0;
    for(int i = 0; i < arr.size(); i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}


int main(){
    vector<int> arr = {1,-2,3,4,-5};
    
    cout << maxSumSub(arr);
    return 0;
}