// question no 560 on leetcode

#include <iostream>
#include <vector>

using namespace std;

int subarraySumBrute(vector<int> &arr, int k ){
    int n = arr.size();
    int count = 0;

    for(int i = 0; i < n; i++ ){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == k) count++;
        }
    }

    return count;
}

int subarraySumOpt(vector<int> &arr, int k){
    
}

int main(){

    vector<int> arr = {9,3,7,5};

    cout << subarraySumBrute(arr, 12) << endl;

    cout << "hi arshad" << endl;
    return 0;  
}