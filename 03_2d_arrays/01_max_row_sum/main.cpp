#include <iostream>
#include <climits>

using namespace std;

int maxRowSum(int mat[][3], int row, int column)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        int currSum = 0;
        for (int j = 0; j < column; j++)
        {
            currSum += mat[i][j];
        }

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main()
{

    int row = 3, column = 3;

    int matrix[3][3] = {
        {2, 4, 2},
        {3, 6, 7},
        {9, 3, 9},
    };

    cout << maxRowSum(matrix, row, column) << endl;
    cout << "hi arshad" << endl;
    return 0;
}