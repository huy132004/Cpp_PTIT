#include <bits/stdc++.h>
using namespace std;

bool comparator(long a, long b)
{
    return a < b;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int m, n;
        cin >> m >> n;
        int p = m + n;
        int a[p];
        for (int i = 0; i < p; i++)
        {
            cin >> a[i];
        }
        sort(a, a + p, comparator);
        for (int i = 0; i < p; i++)
        {
            cout << a[i] << " ";
        }
    }
}