#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin >> n;
        long long n2 = n;
        for (long long i = 2; i*i <= n; i++)
        {
            while (n2 % i == 0)
            {
                n2 /= i;
                cout << i << " ";
            }
        }
        if (n2 > 1){
            cout << n2;
        }
        cout << endl;
    }
}