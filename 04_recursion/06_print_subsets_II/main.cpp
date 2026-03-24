// question 78 on leetcode

#include <iostream>
#include <vector>

using namespace std;

void getAllSubsets(vector<int> &arr, vector<int> &ans, int i , vector<vector<int>> &allSubsets){
    if(i == arr.size()){
        // store subsets
        allSubsets.push_back({ans});
        return;
    }

    // include
    ans.push_back(arr[i]);
    getAllSubsets(arr, ans, i + 1, allSubsets);

    ans.pop_back(); // backtracking

    //exclude
    getAllSubsets(arr, ans, i + 1, allSubsets);
}

vector<vector<int>> subsets(vector<int> &arr){
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(arr, ans, 0 , allSubsets);
    return allSubsets;
}

int main(){

    vector<int> arr = {1,2,3};

    vector<vector<int>> ans = subsets(arr);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    cout << "hi arshad" << endl;
    return 0;
}