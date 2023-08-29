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
        int i;
        for (i = 0; i < n-1; i++)
        {
            cin >> a[i];
        }
        i = 0;
        while(a[i+1] - a[i] == 1){
            ++i;
        }
        cout << a[i]+1 << endl;
    }
}