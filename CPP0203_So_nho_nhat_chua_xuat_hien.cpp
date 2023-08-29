#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int x = 0;
        bool check;
        do
        {
            check = true;
            ++x;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == x)
                {
                    check = false;
                    break;
                }
            }
        } while (check == false);
        cout << x << endl;
    }
}