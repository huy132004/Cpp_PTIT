#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int row, column;
        cin >> row >> column;
        int arr_in[row][column];
        int arr_out[row][column];
        int i, j;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                cin >> arr_in[i][j];
                arr_out[i][j] = arr_in[i][j];
            }
        }
        
        int shorter = row < column ? row : column;
        for (int point = 0; point < shorter / 2; point++)
        {
            i = point;
            for (j = point + 1; j < column - point; j++)
            {
                arr_out[i][j] = arr_in[i][j - 1];
            }

            j = column - point - 1;
            for (i = point + 1; i < row - point; i++)
            {
                arr_out[i][j] = arr_in[i - 1][j];
            }

            i = row - point - 1;
            for (j = column - point - 2; j >= point; j--)
            {
                arr_out[i][j] = arr_in[i][j + 1];
            }

            j = point;
            for (i = row - point - 2; i >= point; i--)
            {
                arr_out[i][j] = arr_in[i + 1][j];
            }
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                cout << arr_out[i][j] << " ";
            }
        }
        cout << endl;
    }
}