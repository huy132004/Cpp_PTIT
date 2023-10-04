#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int row, column;
        cin >> row >> column;
        int a[row][column];
        int i, j;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                cin >> a[i][j];
            }
        }
        i = 0;
        j = 0;
        int count = 0, point = 0;
        while (1)
        {
            i = point;
            for (j = point; j < column-point; j++)
            {
                cout << a[i][j] << " ";
                ++count;
            }
            if(count == row * column) break;
            
            j = column-point-1;
            for (i = point+1; i < row-point; i++)
            {
                cout << a[i][j] << " ";
                ++count;
            }
            if(count == row * column) break;
            
            i = row-point-1;
            for (j = column-point-2; j >= point; j--)
            {
                cout << a[i][j] << " ";
                ++count;
            }
            if(count == row * column) break;
            
            j = point;
            for (i = row-point-2; i >= point+1; i--)
            {
                cout << a[i][j] << " ";
                ++count;
            }
            if(count == row * column) break;
            
            ++point;
        }
        cout << endl;
    }
}