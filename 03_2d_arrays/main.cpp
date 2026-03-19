#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int row = 4;
    int column = 3;
    int matrix[row][column] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
    }; // 4 rows 3 columsns

    vector <vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
    };

    cout << matrix[0][1] << endl;

    // matrix[0][1] = 234;

    // cout << matrix[0][1] << endl;

    int row2 = 4, column2 = 3;
    int matrix2[row2][column2];

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << matrix2[i][j] << " , ";
        }
        cout << endl;
    }

    cout << "hi arshad" << endl;
    return 0;
}