// question no 560 on leetcode

#include <iostream>
#include <vector>
#include <unordered_map>

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
    int n = arr.size();
    int count = 0;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i -1] + arr[i];
    }

    unordered_map<int, int> m;

    for(int j = 0; j < n; j++){
        if(prefixSum[j] == k) count++;
        int val = prefixSum[j] - k;

        if(m.find(val) != m.end()){
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()){
            m[prefixSum[j]] = 0;
        }

        m[prefixSum[j]]++;
    }
    return count;
}

int main(){

    vector<int> arr = {9,3,7,5};

    // cout << subarraySumBrute(arr, 12) << endl;
    cout << subarraySumOpt(arr, 12) << endl;

    cout << "hi arshad" << endl;
    return 0;  
}