#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a[210];
        int n = 0;
        char kitu;
        do
        {
            cin >> a[n];
            ++n;
            kitu = getchar();
        } while (kitu == ' ');
        int chan = 0, le = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                ++chan;
            }
            else
            {
                ++le;
            }
        }
        if ((n % 2 == 0 && chan > le) || (n % 2 == 1 && le > chan))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}