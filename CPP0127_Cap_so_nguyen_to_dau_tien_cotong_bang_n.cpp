#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
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
        bool check = false;
        for(int i = 2; i < n; i++){
            if(isPrime(i) == true && isPrime(n-i) == true){
                cout << i << " " << n-i << endl;
                check = true;
                break;
            }
        }
        if(check == false) cout << -1 << endl;
    }
}