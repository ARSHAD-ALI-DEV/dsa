// question 240 on leetcode

#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target){
    int m = mat.size(), n = mat[0].size();
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if(target == mat[r][c]){
            return true;
        }else if(target < mat[r][c]){
            c--;
        }else{
            r++;
        }
    }

    return false;
    
}

int main(){

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 3;
    cout << searchMatrix(matrix, target) << endl;
    cout << "hi arshad" << endl;
    return 0;
}