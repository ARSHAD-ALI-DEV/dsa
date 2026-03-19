#include <iostream>

using namespace std;

int diagonalSum(int matrix[][3], int row, int column)
{
    int diagSum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                diagSum += matrix[i][j];
            }
        }
    }
    return diagSum;
}

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 10, 6},
        {7, 8, 9}};

    cout << diagonalSum(matrix, 3, 3) << endl;
    cout << "hi arshad" << endl;
    return 0;
}