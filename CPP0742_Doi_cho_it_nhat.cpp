#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int swap = 0;
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                ++swap;
            }
        }
        cout << swap / 2 << endl;
    }
}