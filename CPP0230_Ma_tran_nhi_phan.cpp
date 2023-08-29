#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int count_1 = 0, count_0 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                ++count_1;
            }
            else
            {
                ++count_0;
            }
        }
        if (count_1 > count_0)
            ++count;
    }
    cout << count;
}