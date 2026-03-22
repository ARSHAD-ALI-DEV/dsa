//  question no 287 on leetcode

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findDuplicateFirst(vector<int> &arr){ // TC : O(n) SC: O(n)
    unordered_set<int> s;

    for(int val : arr){
        if(s.find(val) != s.end()){
            return val;
        }
        s.insert(val);
    }

    return -1;
}

int findDuplicateOpt(vector<int> &arr){  
    int slow = arr[0] , fast = arr[0];

    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while (slow != fast);

    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    
    return slow;
}

int main(){

    vector<int> arr = {1,3,4,2,2};

    cout << findDuplicateFirst(arr) << endl;
    cout << findDuplicateOpt(arr) << endl;
    cout << "hi arshad" << endl;
    return 0;
}