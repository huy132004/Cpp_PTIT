#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;2222222222222222222222
    if (n == 2 || n == 3 || n == 5 || n == 7) return true;
    if (n % 2 == 0)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (isPrime(i) == true && isPrime(n - i) == true)
            {
                cout << i << " " << n - i;
            }
        }
        cout << endl;
    }
}